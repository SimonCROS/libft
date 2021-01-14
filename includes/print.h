/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:06:03 by scros             #+#    #+#             */
/*   Updated: 2021/01/14 14:25:15 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "vector3.h"
# include "libft.h"

int				ft_printf(const char *format,\
				...) __attribute__((format(printf,1,2)));
ssize_t			ft_puthex_fd(unsigned char c, int fd);
ssize_t			ft_putendl_fd(char *s, int fd);
ssize_t			ft_putchar_fd(char c, int fd);
ssize_t			ft_putstr_fd(char *s, int fd);
ssize_t			ft_putnbr_fd(long n, int fd);
ssize_t			ft_puthex(unsigned char c);
ssize_t			ft_putvec(t_vector3 *v);
ssize_t			ft_putendl(char *s);
ssize_t			ft_putchar(char c);
ssize_t			ft_putstr(char *s);
ssize_t			ft_putnbr(long n);

#endif
