#include "libft.h"

/**
 * @brief Loop inside all values of the list and replace them in a new list with
 * the result of mapper.
 * 
 * @param list the list
 * @param mapper the function to execute on all the values of the list
 * @param del the function to delete an element of the list
 * @return t_list* the new list
 */

t_list	*lst_map(t_list *list, t_function mapper, t_consumer del)
{
	t_entry	*entry;
	t_list	*copy;

	copy = lst_new(del);
	if (!copy)
		return (NULL);
	if (lst_is_empty(list))
		return (copy);
	entry = list->first;
	lst_push(copy, mapper(entry->value));
	while (entry->next)
	{
		entry = entry->next;
		lst_push(copy, mapper(entry->value));
	}
	return (copy);
}

/**
 * @brief Loop inside all values of the list and replace them with the result of
 * mapper.
 * 
 * @param list the list
 * @param mapper the function to execute on all the values of the list
 * @param del the function to delete an element of the list
 */

void	lst_map_in(t_list *list, t_function mapper, t_consumer del)
{
	t_entry	*entry;

	list->del = del;
	if (lst_is_empty(list))
		return ;
	entry = list->first;
	entry->value = mapper(entry->value);
	while (entry->next)
	{
		entry = entry->next;
		entry->value = mapper(entry->value);
	}
}
