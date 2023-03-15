#include "libft.h"

t_map	*map_new(t_comparator comparator, t_biconsumer del)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->del = del;
	map->size = 0;
	map->first = NULL;
	map->comparator = comparator;
	return (map);
}
