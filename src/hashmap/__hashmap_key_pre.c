#include "libft.h"

int	__hashmap_key_pre(t_hashpair *pair, char *key)
{
	return (ft_strcmp(pair->key, key) == 0);
}
