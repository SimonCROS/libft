/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_to.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:22:20 by scros             #+#    #+#             */
/*   Updated: 2021/02/12 15:14:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include <math.h>

unsigned int	ft_color_to_hexa(const t_color c)
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;

	r = fminf(c.r, 1) * 255;
	g = fminf(c.g, 1) * 255;
	b = fminf(c.b, 1) * 255;
	a = 255 - (fminf(c.a, 1) * 255);
	return (a << 24 | r << 16 | g << 8 | b);
}

unsigned int	ft_color_to_hex(const t_color c)
{
	return (0x00ffffff & ft_color_to_hexa(c));
}
