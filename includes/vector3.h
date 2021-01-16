/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:33:36 by scros             #+#    #+#             */
/*   Updated: 2021/01/16 13:34:15 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR3_H
# define VECTOR3_H

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

float			ft_vector3_distance_squaredv(const t_vector3 *v1, const
	t_vector3 *v2);
float			ft_vector3_distance(const t_vector3 *v, float x, float y, float
	z);
t_vector3		ft_vector3_cross(const t_vector3 *v, float x, float y, float z);
float			ft_vector3_distancev(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		ft_vector3_sub(const t_vector3 *v, float x, float y, float z);
t_vector3		ft_vector3_mul(const t_vector3 *v, float x, float y, float z);
t_vector3		ft_vector3_div(const t_vector3 *v, float x, float y, float z);
t_vector3		ft_vector3_add(const t_vector3 *v, float x, float y, float z);
float			ft_vector3_dot(const t_vector3 *v, float x, float y, float z);
t_vector3		ft_vector3_crossv(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		ft_vector3_subv(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		ft_vector3_mulv(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		ft_vector3_divv(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		ft_vector3_addv(const t_vector3 *v1, const t_vector3 *v2);
float			ft_vector3_dotv(const t_vector3 *v1, const t_vector3 *v2);
t_vector3		*ft_vector3_set(t_vector3 *v, float x, float y, float z);
t_vector3		*ft_vector3_setv(t_vector3 *v1, const t_vector3 *v2);
double			ft_vector3_length_squared(const t_vector3 *v);
t_vector3		ft_vector3_muld(const t_vector3 *v, float a);
t_vector3		ft_vector3_divd(const t_vector3 *v, float a);
t_vector3		ft_vector3_news(float x, float y, float z);
t_vector3		*ft_vector3_new(float x, float y, float z);
t_vector3		ft_vector3_normalize(const t_vector3 *v);
t_vector3		*ft_vector3_setz(t_vector3 *v, float z);
t_vector3		*ft_vector3_sety(t_vector3 *v, float y);
t_vector3		*ft_vector3_setx(t_vector3 *v, float x);
t_vector3		*ft_vector3_clone(const t_vector3 *v);
double			ft_vector3_length(const t_vector3 *v);
t_vector3		ft_vector3_copy(const t_vector3 *v);

#endif
