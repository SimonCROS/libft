/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:00:05 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 17:17:24 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"
#ifdef USE_LIBC_MATH
# include <math.h>
# define SQRT sqrt
#else
# define SQRT ft_sqrt
#endif

double	ft_vector3_length_squared(const t_vector3 *v)
{
	return (v->x * v->x + v->y * v->y + v->z * v->z);
}

double	ft_vector3_length(const t_vector3 *v)
{
	return (SQRT(ft_vector3_length_squared(v)));
}
