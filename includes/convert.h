/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:43:24 by scros             #+#    #+#             */
/*   Updated: 2021/03/08 14:56:50 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "libft.h"

char			*ft_itohex_to(unsigned int n, char *dest, int prefix);
char			*ft_itooctal_to(unsigned int n, char *dest);
char			*ft_uitoa_to(unsigned int n, char *dest);
int				ft_atoi_len(const char *str, int *len);
char			*ft_itohex(unsigned int n, int prefix);
char			*ft_itooctal(unsigned int n);
char			*ft_uitoa(unsigned int n);
int				ft_atof_full(char *str, float *result);
float			ft_atof(char *str);
int				ft_atoul_full(char *str, unsigned long *result);
unsigned long	ft_atoul(char *str);
int				ft_atoi_full(char *str, int *result);
int				ft_atoi(const char *str);
int				is_float(char *str);
char			*ft_itoa(int n);

#endif
