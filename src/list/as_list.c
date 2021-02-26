#include "list.h"
#include <stdlib.h>

/**
 * @brief Convert the void** array into a new t_list.
 * 
 * @param array the array to convert
 * @param del the function to free an element of the list
 * @return t_list* the new malloced list
 */

t_list	*as_list(void **array, t_consumer del)
{
	t_list	*list;

	list = lst_new(del);
	if (array)
		while (*array)
			lst_push(list, *(array++));
	return (list);
}

/**
 * @brief Convert the void** array into a new t_list, then free array.
 * 
 * @param array the array to convert
 * @param del the function to free an element of the list
 * @return t_list* the new malloced list
 */

t_list	*as_listf(void **array, t_consumer del)
{
	t_list	*list;

	list = as_list(array, del);
	free(array);
	return (list);
}
