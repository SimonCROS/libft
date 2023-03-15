#include "libft.h"

static void	*map_remove_entry(t_map *map, void *key)
{
	t_mapentry	**parent_next;
	t_mapentry	*entry;

	if (clst_is_empty((t_clist *)map))
		return (NULL);
	parent_next = &(map->first);
	entry = map->first;
	while (entry && map->comparator(entry->key, key) == 0)
	{
		parent_next = &(entry->next);
		entry = entry->next;
	}
	if (entry)
	{
		*parent_next = entry->next;
		entry->next = NULL;
		--(map->size);
		return (entry);
	}
	return (NULL);
}

void	*map_remove(t_map *map, void *key)
{
	t_mapentry	*entry;
	void		*value;

	entry = map_remove_entry(map, key);
	if (entry)
	{
		value = entry->value;
		map->del(entry->key, NULL);
		free(entry);
		return (value);
	}
	return (NULL);
}

int	map_delete(t_map *map, void *key)
{
	t_mapentry	*entry;

	entry = map_remove_entry(map, key);
	if (entry)
	{
		map->del(entry->key, entry->value);
		free(entry);
		return (TRUE);
	}
	return (FALSE);
}
