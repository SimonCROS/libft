/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:06:03 by scros             #+#    #+#             */
/*   Updated: 2020/12/22 11:42:06 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "libft.h"

ssize_t	ft_puthex_fd(unsigned char c, int fd);
ssize_t	ft_putendl_fd(char *s, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putnbr_fd(long n, int fd);

#endif
