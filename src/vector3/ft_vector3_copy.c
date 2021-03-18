#include "libft.h"

t_vector3	vec3_copy(t_vector3 v)
{
	t_vector3	vec;

	vec3_setv(&vec, v);
	return (vec);
}
