/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:47:15 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 14:09:06 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putchar_fd(char c, int fd)
{
	if (c)
		return (write(fd, &c, 1));
	return (0);
}

ssize_t	ft_putchar(char c)
{
	return (ft_putchar_fd(c, 1));
}