#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src || dst >= src + len)
		ft_memcpy(dst, src, len);
	else
	{
		// Copy 8 (on x64 architectures) by 8 bytes
		while (len >= sizeof(ptrdiff_t))
		{
			len -= sizeof(ptrdiff_t);
			*(ptrdiff_t *)(dst + len) = *(ptrdiff_t *)(src + len);
		}
		// Then copy the remaining bytes
		while (len > 0)
		{
			--len;
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		}
	}
	return (dst);
}
