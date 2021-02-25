#include "libft.h"

void	lst_destroy(t_list *list)
{
	lst_clear(list);
	free(list);
}
