#include "libft.h"

t_opt	lst_shift(t_list *list)
{
	t_entry	*first;
	void	*value;

	if (lst_is_empty(list))
		return (NULL);
	first = lst_shift_entry(list);
	value = first->value;
	free(first);
	return (value);
}
