/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_dot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:05 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:39:55 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

float	vec3_dot(t_vector3 v, float x, float y, float z)
{
	return (v.x * x + v.y * y + v.z * z);
}

float	vec3_dotv(t_vector3 v1, t_vector3 v2)
{
	return (vec3_dot(v1, v2.x, v2.y, v2.z));
}
