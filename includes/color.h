/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:39:25 by scros             #+#    #+#             */
/*   Updated: 2021/01/13 14:39:33 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct	s_color
{
	char		r;
	char		g;
	char		b;
	char		a;
}				t_color;

t_color			*ft_color_from_hsla(unsigned short h, unsigned char s,
	unsigned char l, unsigned char a);
t_color			*ft_color_from_rgba(unsigned char r, unsigned char g,
	unsigned char b, unsigned char a);
t_color			*ft_color_from_hex(unsigned int hex);
unsigned int	ft_color_to_hex(const t_color *c);
t_color			*ft_color_clone(const t_color *c);

#endif
