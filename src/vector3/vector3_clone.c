#include "libft.h"

t_vector3	*vec3_clone(t_vector3 v)
{
	return (vec3_malloc(v.x, v.y, v.z));
}
