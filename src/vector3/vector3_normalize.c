#include "libft.h"

t_vector3	vec3_normalize(t_vector3 v)
{
	float	length;

	length = vec3_length(v);
	if (length == 0)
		return (vec3_new(0, 0, 0));
	return (vec3_divd(v, length));
}
