#include <stdlib.h>
#include "tpool.h"

static void *tpool_worker(void *arg)
{
	t_tpool			*pool;
	t_tpool_work	*work;

	pool = arg;
	while (1) {
		pthread_mutex_lock(&(pool->work_mutex));
		while (clst_is_empty(pool->works) && !pool->stop)
			pthread_cond_wait(&(pool->work_cond), &(pool->work_mutex));
		if (pool->stop)
			break;
		work = clst_shift(pool->works);
		pool->working_cnt++;
		pthread_mutex_unlock(&(pool->work_mutex));
		if (work != NULL) {
			work->func(work->arg);
			tpool_work_destroy(work);
		}
		pthread_mutex_lock(&(pool->work_mutex));
		pool->working_cnt--;
		if (!pool->stop && pool->working_cnt == 0 && clst_is_empty(pool->works))
			pthread_cond_signal(&(pool->working_cond));
		pthread_mutex_unlock(&(pool->work_mutex));
	}
	pool->thread_cnt--;
	pthread_cond_signal(&(pool->working_cond));
	pthread_mutex_unlock(&(pool->work_mutex));
	return NULL;
}

t_tpool	*tpool_create(size_t num)
{
	t_tpool		*pool;
	pthread_t	thread;
	size_t		i;

	if (num == 0)
		num = 2;

	pool = calloc(1, sizeof(*pool));
	pool->thread_cnt = num;
	pthread_mutex_init(&(pool->work_mutex), NULL);
	pthread_cond_init(&(pool->work_cond), NULL);
	pthread_cond_init(&(pool->working_cond), NULL);
	pool->works = clst_new(free);
	i = 0;
	while (i++ < num)
	{
		pthread_create(&thread, NULL, tpool_worker, pool);
		pthread_detach(thread);
	}
	return (pool);
}
