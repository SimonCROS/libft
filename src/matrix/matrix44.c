/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix44.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:15:02 by scros             #+#    #+#             */
/*   Updated: 2021/02/17 14:03:09 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

t_vector3	mat44_mul_vec(t_matrix44 mat, t_vector3 in)
{
	t_vector3	out;
	float		w;

	out.x = in.x * mat[0][0] + in.y * mat[1][0] + in.z * mat[2][0] + mat[3][0];
	out.y = in.x * mat[0][1] + in.y * mat[1][1] + in.z * mat[2][1] + mat[3][1];
	out.z = in.x * mat[0][2] + in.y * mat[1][2] + in.z * mat[2][2] + mat[3][2];
	w = in.x * mat[0][3] + in.y * mat[1][3] + in.z * mat[2][3] + mat[3][3];
	if (w != 1)
	{
		out.x /= w;
		out.y /= w;
		out.z /= w;
	}
	return (out);
}
