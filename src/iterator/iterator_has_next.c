#include "libft.h"

int	iterator_has_next(const t_iterator *iterator)
{
	if (iterator->index == -1)
		return (!!iterator->list->first);
	return (!!iterator->current->next);
}

int	citerator_has_next(const t_citerator *iterator)
{
	if (iterator->index == -1)
		return (!!iterator->list->first);
	return (!!iterator->current->next);
}
