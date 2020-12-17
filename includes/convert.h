/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:06:26 by scros             #+#    #+#             */
/*   Updated: 2020/12/17 15:06:26 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "libft.h"

int		ft_atoi_len(const char *str, int *len);
char	*ft_ultoa_to(unsigned long n, char *dest);
char	*ft_uitoa_to(unsigned int n, char *dest);
char	*ft_ltoa_to(long n, char *dest);
char	*ft_itoa_to(int n, char *dest);
int		ft_atoi(const char *str);
char	*ft_ultoa(unsigned long n);
char	*ft_uitoa(unsigned int n);
char	*ft_ltoa(long n);
char	*ft_itoa(int n);

#endif
