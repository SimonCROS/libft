/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:43:24 by scros             #+#    #+#             */
/*   Updated: 2021/02/26 15:46:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "libft.h"

char	*ft_itohex_to(unsigned int n, char *dest, int prefix);
char	*ft_itooctal_to(unsigned int n, char *dest);
char	*ft_uitoa_to(unsigned int n, char *dest);
int		ft_atoi_len(const char *str, int *len);
char	*ft_itohex(unsigned int n, int prefix);
char	*ft_itoa_to(int n, char *dest);
char	*ft_itooctal(unsigned int n);
char	*ft_uitoa(unsigned int n);
float	ft_atof(const char **str);
int		ft_atoi(const char *str);
int		is_float(char *str);
char	*ft_itoa(int n);

#endif
