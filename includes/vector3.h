/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:45:40 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:46:38 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR3_H
# define VECTOR3_H

typedef struct s_vector3
{
	float	x;
	float	y;
	float	z;
}	t_vector3;

t_vector3	vec3_rotate_axis(t_vector3 vec, t_vector3 a, float theta);
float		vec3_distance(t_vector3 v, float x, float y, float z);
t_vector3	vec3_cross(t_vector3 v, float x, float y, float z);
t_vector3	*vec3_set(t_vector3 *v, float x, float y, float z);
float		vec3_distance_squaredv(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_sub(t_vector3 v, float x, float y, float z);
t_vector3	vec3_mul(t_vector3 v, float x, float y, float z);
t_vector3	vec3_div(t_vector3 v, float x, float y, float z);
t_vector3	vec3_add(t_vector3 v, float x, float y, float z);
float		vec3_dot(t_vector3 v, float x, float y, float z);
float		vec3_distancev(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_rotate_z(t_vector3 vec, float theta);
t_vector3	vec3_rotate_y(t_vector3 vec, float theta);
t_vector3	vec3_rotate_x(t_vector3 vec, float theta);
t_vector3	vec3_crossv(t_vector3 v1, t_vector3 v2);
t_vector3	*vec3_setv(t_vector3 *v1, t_vector3 v2);
t_vector3	*vec3_malloc(float x, float y, float z);
float		vec3_angle(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_subv(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_mulv(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_divv(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_addv(t_vector3 v1, t_vector3 v2);
float		vec3_dotv(t_vector3 v1, t_vector3 v2);
t_vector3	vec3_new(float x, float y, float z);
float		vec3_length_squared(t_vector3 v);
t_vector3	vec3_muld(t_vector3 v, float a);
t_vector3	vec3_divd(t_vector3 v, float a);
t_vector3	vec3_normalize(t_vector3 v);
t_vector3	vec3_negate(t_vector3 v);
t_vector3	*vec3_clone(t_vector3 v);
float		vec3_length(t_vector3 v);
t_vector3	vec3_copy(t_vector3 v);

#endif
