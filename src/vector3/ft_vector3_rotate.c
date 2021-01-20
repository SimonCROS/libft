/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:37:05 by scros             #+#    #+#             */
/*   Updated: 2021/01/20 13:15:53 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "vector3.h"

t_vector3	ft_vector3_rotate_x(t_vector3 vec, float theta)
{
	t_vector3	res;

	res.x = vec.x;
	res.y = vec.y * cos(theta) - vec.z * sin(theta);
	res.z = vec.y * sin(theta) + vec.z * cos(theta);
	return (res);
}

t_vector3	ft_vector3_rotate_y(t_vector3 vec, float theta)
{
	t_vector3	res;

	res.x = vec.x * cos(theta) + vec.z * sin(theta);
	res.y = vec.y;
	res.z = -vec.x * sin(theta) + vec.z * cos(theta);
	return (res);
}

t_vector3	ft_vector3_rotate_z(t_vector3 vec, float theta)
{
	t_vector3	res;

	res.x = vec.x * cos(theta) - vec.y * sin(theta);
	res.y = vec.x * sin(theta) + vec.y * cos(theta);
	res.z = vec.z;
	return (res);
}

t_vector3	ft_vector3_rotate_axis(t_vector3 vec, t_vector3 a, float theta)
{
	double		x_prime;
	double		y_prime;
	double		z_prime;

	x_prime = a.x * (a.x * vec.x + a.y * vec.y + a.z * vec.z) * (1 - cos(theta))
			+ vec.x * cos(theta)
			+ (-a.z * vec.y + a.y * vec.z) * sin(theta);
	y_prime = a.y * (a.x * vec.x + a.y * vec.y + a.z * vec.z) * (1 - cos(theta))
			+ vec.y * cos(theta)
			+ (a.z * vec.x - a.x * vec.z) * sin(theta);
	z_prime = a.z * (a.x * vec.x + a.y * vec.y + a.z * vec.z) * (1 - cos(theta))
			+ vec.z * cos(theta)
			+ (-a.y * vec.x + a.x * vec.y) * sin(theta);
	return (ft_vector3_news(x_prime, y_prime, z_prime));
}
