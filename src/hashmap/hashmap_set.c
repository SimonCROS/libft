#include "libft.h"

char	hashmap_set(t_hashmap *hashmap, char *key, void *value)
{
	t_clist		*bucket;
	t_hashpair	*pair;

	bucket = hashmap->buckets + (str_hashcode(key) % hashmap->cap);
	pair = clst_find_first(bucket, (t_bipre)__hashmap_key_pre, key);
	if (pair)
		pair->value = value;
	else
	{
		pair = malloc(sizeof(t_hashpair));
		if (!pair || !clst_push(bucket, pair))
		{
			free(pair);
			return (FALSE);
		}
		pair->key = key;
		pair->value = value;
	}
	return (TRUE);
}
