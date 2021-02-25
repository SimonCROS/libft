#include "libft.h"

void	lst_foreach(t_list *list, t_consumer visitor)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = list->first;
	visitor(entry->value);
	while (entry->next)
	{
		entry = entry->next;
		visitor(entry->value);
	}
}
