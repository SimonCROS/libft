#include "libft.h"

void	*lst_reduce(t_list *list, void *identity, t_bifunction accumulator,
	t_consumer accumulator_free)
{
	t_entry	*entry;
	void	*identity_tmp;

	if (lst_is_empty(list))
		return (identity);
	entry = list->first;
	while (entry)
	{
		identity_tmp = identity;
		identity = accumulator(identity, entry->value);
		if (accumulator_free)
			accumulator_free(identity_tmp);
		entry = entry->next;
	}
	return (identity);
}
