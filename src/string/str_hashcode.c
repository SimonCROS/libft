#include "libft.h"

t_uint32	str_hashcode(char *key)
{
	unsigned int	code;

	code = 0;
	while (*key != '\0')
	{
		code = *key + 31 * code;
		key++;
	}
	return (code);
}