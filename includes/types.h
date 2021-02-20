/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:06:43 by scros             #+#    #+#             */
/*   Updated: 2021/02/02 12:46:16 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define TRUE 1
# define FALSE 0

typedef void*	(*t_function)(void *);
typedef void*	(*t_bifunction)(void *, void *);
typedef void	(*t_consumer)(void *);
typedef void	(*t_biconsumer)(void *, void *);
typedef int		(*t_predicate)(void *);
typedef int		(*t_bipredicate)(void *, void *);

#endif
