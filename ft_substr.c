/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:06:20 by scros             #+#    #+#             */
/*   Updated: 2020/11/25 12:01:16 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *str;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (!(str = malloc(len + 1)))
		return (0);
	ft_memcpy(str, s + start, len);
	str[len] = 0;
	return (str);
}
