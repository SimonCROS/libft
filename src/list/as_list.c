#include "list.h"

t_list	*as_list(void **array, t_consumer del)
{
	t_list	*list;

	list = lst_new(del);
	if (array)
		while (*array)
			lst_push(list, *(array++));
	return (list);
}
