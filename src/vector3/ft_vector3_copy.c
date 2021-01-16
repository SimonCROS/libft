/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:14:28 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:15:34 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	ft_vector3_copy(const t_vector3 *v)
{
	t_vector3 vec;

	ft_vector3_setv(&vec, v);
	return (vec);
}
