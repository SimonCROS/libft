#include "libft.h"

t_mapentry	*map_get_entry(t_map *map, void *key)
{
	t_mapentry	*entry;

	if (clst_is_empty((t_clist *)map))
		return (NULL);
	entry = map->first;
	while (entry)
	{
		if (map->comparator(entry->key, key) == 0)
			return (entry);
		entry = entry->next;
	}
	return (NULL);
}

void	*map_get(t_map *map, void *key)
{
	t_mapentry	*entry;

	entry = map_get_entry(map, key);
	if (entry)
		return (entry->value);
	return (NULL);
}
