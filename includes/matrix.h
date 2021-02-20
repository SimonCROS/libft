/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:03:01 by scros             #+#    #+#             */
/*   Updated: 2021/02/17 14:17:05 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "vector3.h"

typedef struct s_matrix44
{
	float	e[4][4];
}	t_matrix44;

t_vector3	mat44_mul_vec(t_matrix44 matrix, t_vector3 in);

#endif
