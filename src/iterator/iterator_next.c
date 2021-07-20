#include "libft.h"

void	*iterator_next(t_iterator *iterator)
{
	if (!iterator->list || (!iterator->current && iterator->index != -1))
		return (NULL);
	if (iterator->index == -1)
		iterator->current = iterator->list->first;
	else
		iterator->current = iterator->current->next;
	iterator->index++;
	return (iterator->current->value);
}

void	*citerator_next(t_citerator *iterator)
{
	if (!iterator->list || (!iterator->current && iterator->index != -1))
		return (NULL);
	if (iterator->index == -1)
		iterator->current = iterator->list->first;
	else
		iterator->current = iterator->current->next;
	iterator->index++;
	return (iterator->current);
}
