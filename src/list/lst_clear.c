#include "libft.h"

void	lst_clear(t_list *list)
{
	t_entry	*buf;

	if (lst_is_empty(list))
		return ;
	buf = lst_shift_entry(list);
	while (buf)
	{
		if (list->del && buf->value)
			list->del(buf->value);
		free(buf);
		buf = lst_shift_entry(list);
	}
}
