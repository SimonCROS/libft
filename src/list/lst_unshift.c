#include "libft.h"

void	*lst_unshift(t_list *list, void *element)
{
	t_entry	*entry;

	//ft_putendl("a");
	entry = lst_new_entry(element);
	if (!entry)
	{
		if (list->del)
			list->del(element);
		return (NULL);
	}
	entry->next = list->first;
	list->first = entry;
	++(list->size);
	return (element);
}
