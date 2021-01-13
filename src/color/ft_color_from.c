/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_from.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:26:34 by scros             #+#    #+#             */
/*   Updated: 2021/01/13 14:39:41 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "stdlib.h"

t_color			*ft_color_from_rgba(unsigned char r, unsigned char g,
	unsigned char b, unsigned char a)
{
	t_color	*color;

	if (!(color = malloc(sizeof(t_color))))
		return (NULL);
	color->r = r;
	color->g = g;
	color->b = b;
	color->a = a;
	return (color);
}

static double	hue2rgb(double p, double q, double t)
{
	if (t < 0)
		t += 1;
	if (t > 1)
		t -= 1;
	if (t < 1 / 6)
		return (p + (q - p) * 6 * t);
	if (t < 1 / 2)
		return (q);
	if (t < 2 / 3)
		return (p + (q - p) * (2 / 3 - t) * 6);
	return (p);
}

t_color			*ft_color_from_hsla(unsigned short h, unsigned char s,
	unsigned char l, unsigned char a)
{
	t_color	*color;
	double	q;
	double	p;

	if (!(color = malloc(sizeof(t_color))))
		return (NULL);
	if (s == 0)
	{
		color->r = l * 255;
		color->g = l * 255;
		color->b = l * 255;
	}
	else
	{
		q = l < 0.5 ? l * (1 + s) : l + s - l * s;
		p = 2 * l - q;
		color->r = hue2rgb(p, q, h + 1 / 3) * 255;
		color->g = hue2rgb(p, q, h) * 255;
		color->b = hue2rgb(p, q, h - 1 / 3) * 255;
	}
	return (color);
}

t_color			*ft_color_from_hex(unsigned int hex)
{
	t_color	*color;

	if (!(color = malloc(sizeof(t_color))))
		return (NULL);
	color->a = hex << 24;
	color->r = hex << 16;
	color->g = hex << 8;
	color->b = hex;
	return (color);
}
