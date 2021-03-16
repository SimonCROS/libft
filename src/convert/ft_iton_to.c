#include "libft.h"

/**
 * Write the unsigned int in the string dest in alphanumeric format.
 * 
 * @param n the int to convert
 * @param dest the buffer for the result
 * @return dest
 */
char	*ft_uitoa_to(unsigned int n, char *dest)
{
	int	len;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	while (1)
	{
		dest[--len] = (n % 10) + '0';
		if (!n)
			break ;
		n /= 10;
	}
	return (dest);
}

/**
 * Write the unsigned int in the string dest in hexadecimal format.
 * 
 * @param n the int to convert
 * @param dest the buffer for the result
 * @return dest
 */
char	*ft_itohex_to(unsigned int n, char *dest, int prefix)
{
	int	len;
	int	c;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	while (1)
	{
		c = (n % 16);
		if (c > 9)
			dest[--len] = 'a' + c - 10;
		else
			dest[--len] = '0' + c;
		if (!n)
			break ;
		n /= 16;
	}
	if (prefix)
	{
		dest[0] = '0';
		dest[1] = 'x';
	}
	return (dest);
}

/**
 * Write the unsigned int in the string dest in octal format.
 * 
 * @param n the int to convert
 * @param dest the buffer for the result
 * @return dest
 */
char	*ft_itooctal_to(unsigned int n, char *dest)
{
	int		len;
	char	c;

	len = ft_strlen(dest);
	ft_memset(dest, '0', len);
	while (1)
	{
		c = (n % 8);
		dest[--len] = '0' + c;
		if (!n)
			break ;
		n /= 8;
	}
	return (dest);
}
