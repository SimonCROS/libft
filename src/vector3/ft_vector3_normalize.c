/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_normalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:58:02 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 13:08:02 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

t_vector3	*ft_vector3_normalize(t_vector3 *v)
{
	double length;

	length = ft_vector3_length(v);
	if (ft_abs(length) < 0)
		return (ft_vector3_init(v, 0, 0, 0));
	v->x /= length;
	v->y /= length;
	v->z /= length;
	return (v);
}
