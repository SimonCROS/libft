#include "libft.h"

void	*hashmap_get(t_hashmap *hashmap, char *key)
{
	t_clist		*bucket;
	t_hashpair	*pair;

	bucket = hashmap->buckets + (str_hashcode(key) % hashmap->cap);
	pair = clst_find_first(bucket, (t_bipre)__hashmap_key_pre, key);
	if (pair)
		return (pair->value);
	return (NULL);
}
