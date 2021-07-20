#include "libft.h"

void	iterator_reset(t_iterator *iterator)
{
	if (iterator->list)
		iterator->current = NULL;
	iterator->index = 0;
}

void	citerator_reset(t_citerator *iterator)
{
	if (iterator->list)
		iterator->current = NULL;
	iterator->index = 0;
}
