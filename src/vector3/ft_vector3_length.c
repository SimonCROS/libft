/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:05 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 18:13:21 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "math.h"

double	ft_vector3_length_squared(t_vector3 *v)
{
	return (v->x * v->x + v->y * v->y + v->z * v->z);
}

double	ft_vector3_length(t_vector3 *v)
{
	return (ft_sqrt(ft_vector3_length_squared(v)));
}
