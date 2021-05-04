#include "libft.h"
#include <math.h>

float	vec3_length_squared(t_vector3 v)
{
	return (v.x * v.x + v.y * v.y + v.z * v.z);
}

float	vec3_length(t_vector3 v)
{
	return (sqrtf(vec3_length_squared(v)));
}
