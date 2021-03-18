#include "libft.h"

float	vec3_dot(t_vector3 v, float x, float y, float z)
{
	return (v.x * x + v.y * y + v.z * z);
}

float	vec3_dotv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_dot(v1, v2.x, v2.y, v2.z));
}
