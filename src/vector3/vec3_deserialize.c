#include "vector3.h"
#include "convert.h"
#include "ftstring.h"
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
	int			ret;

	if (ft_strcnt(str, ',') != 2)
		return (0);
	parts = as_listf((void **)ft_split(str, ','), &free);
	if (!parts)
		return (0);
	ret = 0;
	if (parts->size == 3)
	{
		if (ft_atof_full(lst_get(parts, 0), &(result.x))
			&& ft_atof_full(lst_get(parts, 1), &(result.y))
			&& ft_atof_full(lst_get(parts, 2), &(result.z)))
		{
			ret = 1;
			*vector = result;
		}
	}
	lst_destroy(parts);
	return (ret);
}
