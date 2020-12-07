/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:18:28 by scros             #+#    #+#             */
/*   Updated: 2020/11/24 10:29:52 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	ret = 0;
	i = 0;
	while (n-- && ((unsigned char)s1[i] || (unsigned char)s2[i]) && !ret)
	{
		ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (ret);
}
