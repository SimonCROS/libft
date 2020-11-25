/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:13:44 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 12:34:11 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cp;

	cp = (char*)s;
	i = ft_strlen(s);
	while (i)
	{
		if (cp[i] == c)
			return (cp + i);
		--i;
	}
	if (cp[i] == c)
		return (cp + i);
	return (NULL);
}
