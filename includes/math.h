/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:41:54 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:20:38 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "libft.h"

int		ft_longlonglen_hex(unsigned long long n, int pre, int width);
int		ft_shortlen_hex(unsigned short n, int prefix, int width);
int		ft_longlen_hex(unsigned long n, int prefix, int width);
int		ft_charlen_hex(unsigned char n, int prefix, int width);
int		ft_intlen_hex(unsigned int n, int prefix, int width);
int		ft_longlonglen_octal(unsigned long long n);
int		ft_ulonglonglen(unsigned long long n);
int		ft_shortlen_octal(unsigned short n);
int		ft_longlen_octal(unsigned long n);
int		ft_charlen_octal(unsigned char n);
int		ft_intlen_octal(unsigned int n);
int		ft_ushortlen(unsigned short n);
int		ft_ulonglen(unsigned long n);
int		ft_ucharlen(unsigned char n);
int		ft_longlonglen(long long n);
int		ft_uintlen(unsigned int n);
int		ft_min(int n1, int n2);
int		ft_max(int n1, int n2);
double	ft_sqrt(double number);
int		ft_shortlen(short n);
long	ft_abs(long number);
int		ft_longlen(long n);
int		ft_charlen(char n);
int		ft_intlen(int n);

#endif
