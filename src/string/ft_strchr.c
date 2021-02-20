/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:13:41 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 12:33:18 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cp;

	cp = (char*)s;
	while (1)
	{
		if (*cp == c)
			return (cp);
		if (!*cp)
			break ;
		++cp;
	}
	return (NULL);
}
