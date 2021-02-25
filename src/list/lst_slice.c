#include "libft.h"

t_list	*lst_slice(t_list *list, int start, int end)
{
	t_list	*copy;

	copy = lst_new(list->del);
	if (!copy)
		return (NULL);
	if (start < 0)
		start += list->size;
	if (end < 0)
		end += list->size;
	start = ft_max(start, 0);
	end = ft_min(end, list->size);
	while (start < end)
		lst_push(copy, lst_get(list, start++));
	return (copy);
}
