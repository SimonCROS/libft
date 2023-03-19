#include "libft.h"

void	hashmap_free(t_hashmap *hashmap)
{
	hashmap_clear(hashmap);
	if (hashmap)
		free(hashmap->buckets);
}
