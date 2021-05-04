#include <math.h>
#include "libft.h"

float	vec3_angle(t_vector3 v1, t_vector3 v2)
{
	return (acos(vec3_dotv(v1, v2) / (vec3_length(v1) * vec3_length(v2))));
}
