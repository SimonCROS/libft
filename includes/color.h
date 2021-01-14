/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:06:42 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 13:01:21 by scros            ###   ########lyon.fr   */
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

t_color				*ft_color_from_hsla(unsigned short h, unsigned char s,
	unsigned char l, unsigned char a);
t_color				*ft_color_from_rgba(unsigned char r, unsigned char g,
	unsigned char b, unsigned char a);
t_color				*ft_color_from_hsl(unsigned short h, unsigned char s,
	unsigned char l);
t_color				*ft_color_from_rgb(unsigned char r, unsigned char g,
	unsigned char b);
t_color				*ft_color_from_hexa(unsigned int hex);
t_color				*ft_color_from_hex(unsigned int hex);
unsigned int		ft_color_to_hexa(const t_color *c);
unsigned int		ft_color_to_hex(const t_color *c);
t_color				*ft_color_clone(const t_color *c);

#endif
