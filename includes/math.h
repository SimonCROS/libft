/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:32:32 by scros             #+#    #+#             */
/*   Updated: 2020/12/18 14:32:37 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "libft.h"

int		ft_longlonglen_hex(unsigned long long n);
int		ft_ulonglonglen(unsigned long long n);
int		ft_intlen_hex(unsigned long long n);
int		ft_longlen_hex(unsigned long n);
int		ft_ulonglen(unsigned long n);
int		ft_longlonglen(long long n);
int		ft_uintlen(unsigned int n);
int		ft_min(int n1, int n2);
int		ft_max(int n1, int n2);
long	ft_abs(long number);
int		ft_longlen(long n);
int		ft_intlen(int n);

#endif
