#include "libft.h"

void	hashmap_clear(t_hashmap *hashmap)
{
	unsigned int	i;

	if (!hashmap || !hashmap->buckets)
		return ;
	i = 0;
	while (i < hashmap->cap)
	{
		clst_clear(hashmap->buckets + i);
		i++;
	}
}
