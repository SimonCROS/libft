/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:23:27 by scros             #+#    #+#             */
/*   Updated: 2020/12/15 13:46:22 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strinsert copies the content of src + start into dst without the
** null-terminating \0, but stops copying if the end of dst (\0) is encountered.
**
** ft_strinsert returns a pointer to the null terminating \0 of dst
*/

char	*ft_strinsert(char *dst, const char *src, size_t start)
{
	return (ft_strninsert(dst, src, start, -1));
}