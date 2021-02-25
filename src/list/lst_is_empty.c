#include "libft.h"

int	lst_is_empty(t_list *list)
{
	if (!list)
		return (1);
	return (!(list->first));
}
