#include "libft.h"

t_list	*lst_new(t_consumer del)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->del = del;
	list->size = 0;
	list->first = NULL;
	return (list);
}
