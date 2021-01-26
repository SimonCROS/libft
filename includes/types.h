/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:06:43 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:54:28 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define bool int
# define true 1
# define false 0

typedef void		*(*t_function)(void *);
typedef void		*(*t_bifunction)(void *, void *);
typedef void		(*t_consumer)(void *);
typedef void		(*t_biconsumer)(void *, void *);
typedef bool		(*t_predicate)(void *);
typedef bool		(*t_bipredicate)(void *, void *);

#endif
