/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:05:55 by scros             #+#    #+#             */
/*   Updated: 2021/03/04 10:58:02 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include "types.h"

int				ft_ternary(int condition, int expr1, int expr2);
t_biconsumer	null_biconsumer(void);
t_consumer		null_consumer(void);
t_function		ft_identity(void);

#endif
