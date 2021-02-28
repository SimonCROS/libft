#include "libft.h"

void	lst_free(t_list *list)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = lst_shift_entry(list);
	while (entry)
	{
		free(entry);
		entry = lst_shift_entry(list);
	}
}

void	lst_clear(t_list *list)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = lst_shift_entry(list);
	while (entry)
	{
		if (list->del && entry->value)
			list->del(entry->value);
		free(entry);
		entry = lst_shift_entry(list);
	}
}
