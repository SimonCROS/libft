/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:37:36 by scros             #+#    #+#             */
/*   Updated: 2020/12/18 14:37:36 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "libft.h"

char	*ft_lltohex_to(unsigned long long n, char *dest);
char	*ft_ulltoa_to(unsigned long long n, char *dest);
char	*ft_ltohex_to(unsigned long n, char *dest);
char	*ft_ultoa_to(unsigned long n, char *dest);
char	*ft_itohex_to(unsigned int n, char *dest);
char	*ft_uitoa_to(unsigned int n, char *dest);
int		ft_atoi_len(const char *str, int *len);
char	*ft_lltoa_to(long long n, char *dest);
char	*ft_ltoa_to(long n, char *dest);
char	*ft_itoa_to(int n, char *dest);
char	*ft_uitohex(unsigned int n);
char	*ft_ltohex(unsigned long n);
char	*ft_ltohex(unsigned long n);
char	*ft_ultoa(unsigned long n);
char	*ft_ultoa(unsigned long n);
char	*ft_uitoa(unsigned int n);
int		ft_atoi(const char *str);
char	*ft_ltoa(long n);
char	*ft_ltoa(long n);
char	*ft_itoa(int n);

#endif
