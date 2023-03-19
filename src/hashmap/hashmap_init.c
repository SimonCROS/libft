#include "libft.h"

char	hashmap_init(t_hashmap *hashmap)
{
	unsigned int	i;

	hashmap->cap = 16;
	hashmap->len = 0;
	hashmap->buckets = malloc(hashmap->cap * sizeof(t_clist));
	if (!hashmap->buckets)
		return (FALSE);
	i = 0;
	while (i < hashmap->cap)
	{
		clst_init(hashmap->buckets + i, (t_con)free);
		i++;
	}
	return (TRUE);
}
