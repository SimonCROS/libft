#include "list.h"
#include "types.h"

/**
 * @brief Add a custom entry to the list
 * 
 * @param list the custom list
 * @param element the entry to add MUST START BY A `next` PROPERTY
 * @return if the operation was successful
 */

int	clst_push(t_clist *list, void *entry)
{
	if (!list || !entry)
		return (FALSE);
	if (clst_is_empty(list))
		list->first = entry;
	else
		clst_last_entry(list)->next = entry;
	list->size++;
	return (TRUE);
}

int	lst_push(t_list *list, void *element)
{
	t_entry	*entry;

	if (!list)
		return (FALSE);
	entry = lst_new_entry(element);
	if (!entry)
		return (FALSE);
	if (lst_is_empty(list))
		list->first = entry;
	else
		lst_last_entry(list)->next = entry;
	list->size++;
	return (TRUE);
}
