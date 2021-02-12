/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:10:41 by scros             #+#    #+#             */
/*   Updated: 2021/02/12 15:10:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct	s_color
{
	float		r;
	float		g;
	float		b;
	float		a;
}				t_color;

t_color			color_sub(const t_color v1, const t_color v2);
t_color			color_mul(const t_color v1, const t_color v2);
t_color			color_div(const t_color v1, const t_color v2);
t_color			color_add(const t_color v1, const t_color v2);
t_color			color_mulf(const t_color v, float a);
t_color			color_divf(const t_color v, float a);
unsigned int	ft_color_to_hexa(const t_color c);
t_color			color_from_hexa(unsigned int hex);
unsigned int	ft_color_to_hex(const t_color c);
t_color			color_from_hex(unsigned int hex);
t_color			*color_clone(const t_color c);
t_color			color_copy(const t_color c);

#endif
