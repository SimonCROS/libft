#include "libft.h"

t_iterator	iterator_new(const t_list *list)
{
	t_iterator	iterator;

	iterator.list = list;
	iterator.current = NULL;
	iterator.index = -1;
	return (iterator);
}

t_citerator	citerator_new(const t_clist *list)
{
	t_citerator	iterator;

	iterator.list = list;
	iterator.current = NULL;
	iterator.index = -1;
	return (iterator);
}
