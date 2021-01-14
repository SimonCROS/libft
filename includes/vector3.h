/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:36:23 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 13:18:39 by scros            ###   ########lyon.fr   */
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

double			ft_vector3_distance_squared(t_vector3 *v, double x, double y,
	double z);
double			ft_vector3_distance_squaredv(t_vector3 *v1,
	const t_vector3 *v2);
double			ft_vector3_dot(const t_vector3 *v, double x, double y,
	double z);
double			ft_vector3_distance(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_cross(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_init(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_viv(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_sub(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_mul(t_vector3 *v, double x, double y, double z);
t_vector3		*ft_vector3_add(t_vector3 *v, double x, double y, double z);
double			ft_vector3_dotv(const t_vector3 *v1, const t_vector3 *v2);
double			ft_vector3_distancev(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_crossv(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_addv(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_copy(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_mulv(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_subv(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_vivv(t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_new(double x, double y, double z);
double			ft_vector3_length_squared(const t_vector3 *v);
t_vector3		*ft_vector3_vivd(t_vector3 *v, double a);
t_vector3		*ft_vector3_muld(t_vector3 *v, double a);
t_vector3		*ft_vector3_clone(const t_vector3 *v);
double			ft_vector3_length(const t_vector3 *v);
t_vector3		*ft_vector3_normalize(t_vector3 *v);

#endif
