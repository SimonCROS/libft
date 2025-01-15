#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	// Copy 8 (on x64 architectures) by 8 bytes
	while (i + sizeof(ptrdiff_t) < n)
	{
		*(ptrdiff_t *)(dst + i) = *(ptrdiff_t *)(src + i);
		i += sizeof(ptrdiff_t);
	}
	// Then copy the remaining bytes
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		++i;
	}
	return (dst);
}
