#include "libft.h"
#include <math.h>

float	vec3_distance_squared(t_vector3 v, float x, float y, float z)
{
	float	dx;
	float	dy;
	float	dz;

	dx = v.x - x;
	dy = v.y - y;
	dz = v.z - z;
	return (fabsf(dx * dx + dy * dy + dz * dz));
}

float	vec3_distance_squaredv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_distance_squared(v1, v2.x, v2.y, v2.z));
}

float	vec3_distance(t_vector3 v, float x, float y, float z)
{
	return (sqrtf(vec3_distance_squared(v, x, y, z)));
}

float	vec3_distancev(t_vector3 v1, t_vector3 v2)
{
	return (vec3_distance(v1, v2.x, v2.y, v2.z));
}
