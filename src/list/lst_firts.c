#include "libft.h"

t_opt	lst_first(t_list *list)
{
	if (lst_is_empty(list))
		return (NULL);
	return (list->first->value);
}
