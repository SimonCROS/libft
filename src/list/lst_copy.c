#include "libft.h"

t_list	*lst_copy(t_list *list)
{
	return (lst_map(list, (t_map_opts){{ft_identity()}, NULL, 0}, list->del));
}
