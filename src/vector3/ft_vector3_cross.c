#include "libft.h"

t_vector3	vec3_cross(t_vector3 v, float x, float y, float z)
{
	t_vector3	vec;

	vec.x = v.y * z - v.z * y;
	vec.y = v.z * x - v.x * z;
	vec.z = v.x * y - v.y * x;
	return (vec);
}

t_vector3	vec3_crossv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_cross(v1, v2.x, v2.y, v2.z));
}
