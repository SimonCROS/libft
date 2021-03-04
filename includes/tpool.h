#ifndef TPOOL_H
# define TPOOL_H

# include <unistd.h>
# include <pthread.h>
# include "list.h"
# include "types.h"

typedef struct s_tpool_work
{
	struct s_tpool_work	*next;
	t_function			func;
	void				*arg;
}	t_tpool_work;

typedef struct s_tpool
{
	t_clist			*works;
	pthread_mutex_t	work_mutex;
	pthread_cond_t	work_cond;
	pthread_cond_t	working_cond;
	size_t			working_cnt;
	size_t			thread_cnt;
	int				stop;
}	t_tpool;

int		tpool_add_work(t_tpool *pool, t_function func, void *arg);
t_tpool	*tpool_create(size_t max_thread);
void	tpool_destroy(t_tpool *pool);
void	tpool_wait(t_tpool *pool);

#endif
