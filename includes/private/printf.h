/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:06:15 by scros             #+#    #+#             */
/*   Updated: 2021/01/15 13:09:10 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	char		left;
	char		sign;
	char		space;
	char		hashtag;
	char		zero;
}				t_flags;

typedef struct	s_modifiers
{
	t_flags		flags;
	int			min;
	int			has_prec;
	int			prec;
	char		read_as;
	char		type;
}				t_modifiers;

void			numtoa_to(t_modifiers para, long long i, char *to);
char			*get_sign(t_modifiers para, long long i);
int				string_type(t_modifiers para, char *s);
int				ft_applyer(t_modifiers modifiers, va_list args);
int				num_len(t_modifiers para, long long num);
int				num_type(t_modifiers para, long long i);
int				is_neg(t_modifiers para, long long num);

#endif
