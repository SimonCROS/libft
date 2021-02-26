#include "vector3.h"
#include "convert.h"
#include "string.h"

/**
 * @brief Deserialize a vector at format "x.x,y.y,z.z"
 * 
 * @param str the vector at string format
 * @param str the container of the new vector
 * @return the result of the operation : 1 if no error, 0 else
 */

int	vec3_deserialize(const char *str, t_vector3 *vector)
{
	char	**values;

	values = ft_split(str, ",");
	if (values[0] && values[1] && values[2])
	{
		if (is_float(values[0]) && is_float(values[0]) && is_float(values[0]))
		{
			vector->x = atof(values[0]);
			vector->y = atof(values[1]);
			vector->z = atof(values[2]);
			return (1);
		}
		free(values[0]);
		free(values[1]);
		free(values[2]);
	}	
	free(values);
	return (0);
}
