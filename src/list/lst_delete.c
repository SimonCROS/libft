#include "libft.h"

/**
 * @brief Remove the element index from the list and delete it.
 * 
 * @param list the list
 * @param index the index of the element to delete
 * @return TRUE if the operation was successful, FALSE otherwise
 */
void	lst_delete(t_list *list, int index)
{
	t_opt	value;

	value = lst_remove(list, index);
	if (list->del && value)
		list->del(value);
}
