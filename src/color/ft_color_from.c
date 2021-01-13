/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_from.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:26:34 by scros             #+#    #+#             */
/*   Updated: 2021/01/13 15:07:32 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_color			*ft_color_from_rgb(unsigned char r, unsigned char g,
	unsigned char b)
{
	return (ft_color_from_rgba(r, g, b, 255));
}

t_color			*ft_color_from_hsl(unsigned short h, unsigned char s,
	unsigned char l)
{
	return (ft_color_from_hsla(h, s, l, 255));
}

t_color			*ft_color_from_hex(unsigned int hex)
{
	return (ft_color_from_hexa(0x00ffffff & hex));
}
