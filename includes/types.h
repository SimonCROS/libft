/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:06:43 by scros             #+#    #+#             */
/*   Updated: 2021/02/26 15:16:28 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define TRUE 1
# define FALSE 0

typedef void*			(*t_supplier)();
typedef void*			(*t_function)(void *);
typedef void*			(*t_bifunction)(void *, void *);
typedef void			(*t_consumer)(void *);
typedef void			(*t_biconsumer)(void *, void *);
typedef int				(*t_predicate)(void *);
typedef int				(*t_bipredicate)(void *, void *);
typedef t_supplier		t_sup;
typedef t_function		t_fun;
typedef t_bifunction	t_bifun;
typedef t_consumer		t_con;
typedef t_biconsumer	t_bicon;
typedef t_predicate		t_pre;
typedef t_bipredicate	t_bipre;

#endif
