/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:46:44 by scros             #+#    #+#             */
/*   Updated: 2021/02/12 15:06:02 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

static t_color	operation(const t_color v, float r, float g, float b)
{
	t_color	vec;

	vec.r = v.r + r;
	vec.g = v.g + g;
	vec.b = v.b + b;
	vec.a = 1;
	return (vec);
}

t_color	color_add(const t_color v1, const t_color v2)
{
	return (operation(v1, v2.r, v2.g, v2.b));
}
