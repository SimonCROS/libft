#include "vector3.h"
#include "convert.h"
#include "string.h"
#include "list.h"

/**
 * @brief Deserialize a vector at format "x.x,y.y,z.z"
 * 
 * @param str the vector at string format
 * @param str the container of the new vector
 * @return the result of the operation : 1 if no error, 0 else
 */

int	vec3_deserialize(const char *str, t_vector3 *vector)
{
	t_list		*parts;
	t_vector3	result;
	int			modified;

	modified = 0;
	parts = as_listf(ft_split(str, ','), &free);
	if (!parts)
		return (0);
	if (parts->size == 3)
	{
		if (ft_atof_full(val[0], &(vector->x))
			&& ft_atof_full(val[1], &(vector->y))
			&& ft_atof_full(val[2], &(vector->z)))
			modified = 1;
	}
	lst_destroy(parts);
	*vector = result;
	return (modified);
}
