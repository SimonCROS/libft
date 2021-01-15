/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:05 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 12:49:44 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "_math.h"

double	ft_vector3_length_squared(const t_vector3 *v)
{
	return (v->x * v->x + v->y * v->y + v->z * v->z);
}

double	ft_vector3_length(const t_vector3 *v)
{
	return (ft_sqrt(ft_vector3_length_squared(v)));
}
