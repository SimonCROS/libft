#include "tpool.h"

void tpool_wait(t_tpool *tm)
{
    if (tm == NULL)
        return;
    pthread_mutex_lock(&(tm->work_mutex));
    while (1) {
        if ((!tp->stop && tp->working_cnt != 0) || (tp->stop && tp->thread_cnt != 0)) {
            pthread_cond_wait(&(tm->working_cond), &(tm->work_mutex));
        } else {
            break;
        }
    }
    pthread_mutex_unlock(&(tm->work_mutex));
}