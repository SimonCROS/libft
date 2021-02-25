#include "libft.h"

t_opt	lst_remove(t_list *list, int index)
{
	t_entry	**last_pointer;
	t_entry	*last;
	void	*value;

	if (lst_is_empty(list) || index < 0 || index >= list->size)
		return (NULL);
	last = list->first;
	last_pointer = &(list->first);
	while (index--)
	{
		last_pointer = &(last->next);
		last = last->next;
	}
	value = last->value;
	free(last);
	*last_pointer = NULL;
	--(list->size);
	return (value);
}
