#include "libft.h"

t_iterator	iterator_new(const t_list *list)
{
	t_iterator	iterator;

	iterator.list = list;
	iterator.current = list->first;
	return (iterator);
}

void	iterator_init(t_iterator *iterator, const t_list *list)
{
	iterator->list = list;
	iterator->current = list->first;
}
