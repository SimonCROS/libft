#include "libft.h"

t_vector3	vec3_add(t_vector3 v, float x, float y, float z)
{
	t_vector3	vec;

	vec.x = v.x + x;
	vec.y = v.y + y;
	vec.z = v.z + z;
	return (vec);
}

t_vector3	vec3_addv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_add(v1, v2.x, v2.y, v2.z));
}
