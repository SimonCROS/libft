#include "libft.h"

void	clst_init(t_clist *list, t_consumer del)
{
	list->del = del;
	list->size = 0;
	list->first = NULL;
}

void	lst_init(t_list *list, t_consumer del)
{
	list->del = del;
	list->size = 0;
	list->first = NULL;
}
