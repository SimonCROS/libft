#include "libft.h"

char	lst_copy_to(t_list *list, t_list *dest)
{
	dest->del = list->del;
	return (lst_map_to(list, dest, (t_map_opts){ft_identity(), NULL, 0}));
}

t_list	*lst_copy(t_list *list)
{
	return (lst_map(list, (t_map_opts){ft_identity(), NULL, 0}, list->del));
}
