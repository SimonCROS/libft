/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:43:24 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:20:49 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "libft.h"

char	*ft_lltohex_to(unsigned long long n, char *dest, int prefix);
char	*ft_stohex_to(unsigned short n, char *dest, int prefix);
char	*ft_ltohex_to(unsigned long n, char *dest, int prefix);
char	*ft_ctohex_to(unsigned char n, char *dest, int prefix);
char	*ft_itohex_to(unsigned int n, char *dest, int prefix);
char	*ft_lltooctal_to(unsigned long long n, char *dest);
char	*ft_ulltoa_to(unsigned long long n, char *dest);
char	*ft_stooctal_to(unsigned short n, char *dest);
char	*ft_ltooctal_to(unsigned long n, char *dest);
char	*ft_ctooctal_to(unsigned char n, char *dest);
char	*ft_itooctal_to(unsigned int n, char *dest);
char	*ft_ustoa_to(unsigned short n, char *dest);
char	*ft_ultoa_to(unsigned long n, char *dest);
char	*ft_uctoa_to(unsigned char n, char *dest);
char	*ft_uitoa_to(unsigned int n, char *dest);
char	*ft_stohex(unsigned short n, int prefix);
char	*ft_lltohex(unsigned long n, int prefix);
char	*ft_ltohex(unsigned long n, int prefix);
char	*ft_ctohex(unsigned char n, int prefix);
int		ft_atoi_len(const char *str, int *len);
char	*ft_itohex(unsigned int n, int prefix);
char	*ft_lltoa_to(long long n, char *dest);
char	*ft_lltooctal(unsigned long long n);
char	*ft_stoa_to(short n, char *dest);
char	*ft_ltoa_to(long n, char *dest);
char	*ft_ctoa_to(char n, char *dest);
char	*ft_stooctal(unsigned short n);
char	*ft_itoa_to(int n, char *dest);
char	*ft_ltooctal(unsigned long n);
char	*ft_ctooctal(unsigned char n);
char	*ft_itooctal(unsigned int n);
char	*ft_ustoa(unsigned short n);
char	*ft_ulltoa(unsigned long n);
char	*ft_ultoa(unsigned long n);
char	*ft_uctoa(unsigned char n);
char	*ft_uitoa(unsigned int n);
int		ft_atoi(const char *str);
char	*ft_stoa(short n);
char	*ft_lltoa(long n);
char	*ft_ltoa(long n);
char	*ft_ctoa(char n);
char	*ft_itoa(int n);

#endif
