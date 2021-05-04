#include "libft.h"

t_vector3	*vec3_malloc(float x, float y, float z)
{
	t_vector3	*vec;

	vec = malloc(sizeof(t_vector3));
	if (!vec)
		return (NULL);
	vec3_set(vec, x, y, z);
	return (vec);
}

t_vector3	vec3_null(void)
{
	return ((t_vector3){0, 0, 0});
}

int	vec3_is_null(t_vector3 v)
{
	return (vec3_length_squared(v) == 0);
}

t_vector3	vec3_new(float x, float y, float z)
{
	t_vector3	vec;

	vec3_set(&vec, x, y, z);
	return (vec);
}
