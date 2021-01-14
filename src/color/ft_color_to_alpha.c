/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_to_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:22:20 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 12:45:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

unsigned int	ft_color_to_hexa(const t_color *c)
{
	return (c->a << 24 | c->r << 16 | c->g << 8 | (255 - (char)c->b));
}
