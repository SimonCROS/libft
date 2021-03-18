#include "libft.h"

t_vector3	*vec3_set(t_vector3 *v, float x, float y, float z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vector3	*vec3_setv(t_vector3 *v1, t_vector3 v2)
{
	return (vec3_set(v1, v2.x, v2.y, v2.z));
}
