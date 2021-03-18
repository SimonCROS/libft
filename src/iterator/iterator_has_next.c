#include "libft.h"

int	iterator_has_next(const t_iterator *iterator)
{
	return (!!iterator->current);
}
