/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_negate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:35:42 by scros             #+#    #+#             */
/*   Updated: 2021/01/17 14:36:20 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"
#include "ftmath.h"

t_vector3	ft_vector3_negate(const t_vector3 *v)
{
	return (ft_vector3_muld(v, -1));
}
