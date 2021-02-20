/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:47:15 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 14:10:17 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_puthex_fd(unsigned char c, int fd)
{
	if (c > 9)
		return (ft_putchar_fd('a' + c - 10, fd));
	return (ft_putchar_fd('0' + c, fd));
}

ssize_t	ft_puthex(unsigned char c)
{
	return (ft_puthex_fd(c, 1));
}
