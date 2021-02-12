/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_clone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:32:25 by scros             #+#    #+#             */
/*   Updated: 2021/02/12 15:09:09 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include <stdlib.h>

t_color	*color_clone(const t_color c)
{
	t_color	*color;

	if (!(color = malloc(sizeof(t_color))))
		return (NULL);
	*color = color_copy(c);
	return (color);
}

t_color	color_copy(const t_color c)
{
	t_color	color;

	color.r = c.r;
	color.g = c.g;
	color.b = c.b;
	color.a = c.a;
	return (color);
}
