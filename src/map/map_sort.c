#include "libft.h"

static void	swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

t_map	*map_sort(t_map *map, t_comparator comparator)
{
	int	i;
	int	j;
	int	swapped;

	if (!map)
		return (NULL);
	i = 0;
	while (i < map->size - 1)
	{
		swapped = FALSE;
		j = 0;
		while (j < map->size - i - 1)
		{
			if (comparator())
			{
				swap(&arr[j], &arr[j+1]);
				swapped = TRUE;
			}
			j++;
		}
		if (swapped == FALSE)
			break ;
		i++;
	}
	return (map);
}
