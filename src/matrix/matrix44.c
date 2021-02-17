/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix44.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:15:02 by scros             #+#    #+#             */
/*   Updated: 2021/02/17 14:41:01 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

#include "stdio.h"

t_vector3	mat44_mul_vec(t_matrix44 m, t_vector3 in)
{
	t_vector3	out;

	out.x = in.x * m.e[0][0] + in.y * m.e[1][0] + in.z * m.e[2][0] + m.e[3][0];
	out.y = in.x * m.e[0][1] + in.y * m.e[1][1] + in.z * m.e[2][1] + m.e[3][1];
	out.z = in.x * m.e[0][2] + in.y * m.e[1][2] + in.z * m.e[2][2] + m.e[3][2];
	return (out);
}
