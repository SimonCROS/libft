#include "libft.h"

int	map_put(t_map *map, void *key, void *value)
{
	t_mapentry	*entry;

	entry = malloc(sizeof(t_mapentry));
	if (!entry)
		return (FALSE);
	entry->key = key;
	entry->value = value;
	entry->next = map->first;
	map->first = entry;
	++(map->size);
	return (TRUE);
}

int	map_replace(t_map *map, void *key, void *new_value)
{
	t_mapentry	*entry;

	entry = map_get_entry(map, key);
	if (entry)
	{
		map->del(NULL, entry->value);
		entry->value = new_value;
		return (TRUE);
	}
	return (FALSE);
}
