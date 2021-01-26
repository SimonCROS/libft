/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_to_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:22:20 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 13:41:46 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

unsigned int	ft_color_to_hexa(const t_color c)
{
	return ((255 - c.a) << 24 | c.r << 16 | c.g << 8 | c.b);
}
