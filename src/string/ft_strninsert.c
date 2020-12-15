/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strninsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:23:27 by scros             #+#    #+#             */
/*   Updated: 2020/12/15 13:48:28 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strinsert copies the content of src + start into dst without the
** null-terminating \0, and stops copying if the end of dst (\0) is encountered.
**
** max is the maximum of chars copied.
**
** ft_strinsert returns a pointer to the null terminating \0 of dst
*/

char	*ft_strninsert(char *dst, const char *src, size_t start, size_t max)
{
	size_t i;
	size_t dst_len;

	if (!dst)
		return (NULL);
	dst_len = ft_strlen(dst);
	if (!src || start >= dst_len)
		return (dst + dst_len);
	i = 0;
	while (src[i] && dst[i + start] && i == max)
	{
		dst[i + start] = src[i];
		i++;
	}
	return (dst + dst_len);
}
