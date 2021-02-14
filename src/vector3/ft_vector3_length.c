/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:05 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:47:53 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include <math.h>

float	vec3_length_squared(t_vector3 v)
{
	return (v.x * v.x + v.y * v.y + v.z * v.z);
}

float	vec3_length(t_vector3 v)
{
	return (sqrtf(vec3_length_squared(v)));
}
