/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:54:41 by scros             #+#    #+#             */
/*   Updated: 2021/01/17 15:59:56 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct		s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	unsigned char	a;
}					t_color;

t_color				ft_color_from_hsla(unsigned short h, unsigned char s,
	unsigned char l, unsigned char a);
t_color				ft_color_from_rgba(unsigned char r, unsigned char g,
	unsigned char b, unsigned char a);
t_color				ft_color_sub(const t_color v, unsigned char r, unsigned char
	g, unsigned char b);
t_color				ft_color_mul(const t_color v, unsigned char r, unsigned char
	g, unsigned char b);
t_color				ft_color_div(const t_color v, unsigned char r, unsigned char
	g, unsigned char b);
t_color				ft_color_add(const t_color v, unsigned char r, unsigned char
	g, unsigned char b);
t_color				ft_color_from_hsl(unsigned short h, unsigned char s,
	unsigned char l);
t_color				ft_color_from_rgb(unsigned char r, unsigned char g, unsigned
	char b);
t_color				ft_color_subv(const t_color v1, const t_color v2);
t_color				ft_color_mulv(const t_color v1, const t_color v2);
t_color				ft_color_divv(const t_color v1, const t_color v2);
t_color				ft_color_addv(const t_color v1, const t_color v2);
t_color				ft_color_subd(const t_color v, unsigned char a);
t_color				ft_color_muld(const t_color v, unsigned char a);
t_color				ft_color_divd(const t_color v, unsigned char a);
t_color				ft_color_addd(const t_color v, unsigned char a);
t_color				ft_color_from_hexa(unsigned int hex);
t_color				ft_color_from_hex(unsigned int hex);
unsigned int		ft_color_to_hexa(const t_color c);
t_color				*ft_color_clone(const t_color c);
unsigned int		ft_color_to_hex(const t_color c);
t_color				ft_color_copy(const t_color c);

#endif
