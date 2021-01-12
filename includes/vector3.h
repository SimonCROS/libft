/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:47:15 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 18:06:37 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR3_H
# define VECTOR3_H

typedef struct	s_vector3
{
	double		x;
	double		y;
	double		z;
}				t_vector3;

double			ft_vector3_distance_squared(t_vector3 *v1, double x, double y,
				double z);
double			ft_vector3_distance(t_vector3 *v1, double x, double y,
				double z);
t_vector3		*ft_vector3_init(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_add(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_div(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_mul(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_sub(t_vector3 *v, double x, double y, double z);
double			ft_vector3_distance_squaredv(t_vector3 *v1, t_vector3 *v2);
double			ft_vector3_distancev(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_addv(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_divv(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_mulv(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_subv(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_new(double x, double y, double z);
t_vector3		*ft_vector3_divd(t_vector3 *v, double a);
t_vector3		*ft_vector3_muld(t_vector3 *v, double a);
double			ft_vector3_length_squared(t_vector3 *v);
t_vector3		*ft_vector3_normalize(t_vector3 *v);
t_vector3		*ft_vector3_clone(t_vector3 *v);
double			ft_vector3_length(t_vector3 *v);

#endif
