#include "libft.h"

int	map_contains_key(t_map *map, void *key)
{
	return (map_get_entry(map, key) != NULL);
}
