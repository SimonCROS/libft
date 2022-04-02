#include "libft.h"

int	lst_count(t_list *list, t_predicate filter)
{
	int		count;
	t_entry	*entry;

	count = 0;
	if (lst_is_empty(list))
		return (count);
	entry = list->first;
	if (filter(entry->value))
		count++;
	while (entry->next)
	{
		entry = entry->next;
		if (filter(entry->value))
			count++;
	}
	return (count);
}
