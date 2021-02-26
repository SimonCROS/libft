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
	char	**val;
	int		modified;

	modified = 0;
	val = ft_split(str, ',');
	if (val[0] && val[1] && val[2])
	{
		if (is_float(val[0]) && is_float(val[0]) && is_float(val[0]))
		{
			*vector = vec3_new(atof(val[0]), atof(val[1]), atof(val[2]));
			modified = 1;
		}
		free(val[0]);
		free(val[1]);
		free(val[2]);
	}
	free(val);
	return (modified);
}
