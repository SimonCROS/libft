/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 08:43:06 by scros             #+#    #+#             */
/*   Updated: 2020/11/30 10:41:10 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	void	*c1;
	void	*c2;
	int		ret;
	int		inc;

	c1 = (void*)s1;
	c2 = (void*)s2;
	ret = 0;
	while (n && !ret)
	{
		inc = 1;
		if (n >= sizeof(long) && !(*(long*)c1 - *(long*)c2))
			inc = sizeof(long);
		else
			ret = *(unsigned char*)c1 - *(unsigned char*)c2;
		n -= inc;
		c1 += inc;
		c2 += inc;
	}
	return (ret);
}
