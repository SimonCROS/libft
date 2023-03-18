#include "libft.h"

void	*lst_first(t_list *list)
{
	if (lst_is_empty(list))
		return (NULL);
	return (list->first->value);
}

void	*clst_first(t_clist *list)
{
	if (clst_is_empty(list))
		return (NULL);
	return (list->first);
}
