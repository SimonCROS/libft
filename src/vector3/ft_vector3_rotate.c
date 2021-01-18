/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:37:05 by scros             #+#    #+#             */
/*   Updated: 2021/01/18 14:41:35 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "vector3.h"

t_vector3	ft_vector3_rotate_x(t_vector3 vec, float a)
{
	t_vector3	res;

	res.x = vec.x;
	res.y = vec.y * cos(a) - vec.z * sin(a);
	res.z = vec.y * sin(a) + vec.z * cos(a);
	return (res);
}

t_vector3	ft_vector3_rotate_y(t_vector3 vec, float a)
{
	t_vector3	res;

	res.x = vec.x * cos(a) + vec.z * sin(a);
	res.y = vec.y;
	res.z = -vec.x * sin(a) + vec.z * cos(a);
	return (res);
}

t_vector3	ft_vector3_rotate_z(t_vector3 vec, float a)
{
	t_vector3	res;

	res.x = vec.x * cos(a) - vec.y * sin(a);
	res.y = vec.x * sin(a) + vec.y * cos(a);
	res.z = vec.z;
	return (res);
}
