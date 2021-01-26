/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:06:43 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 14:46:13 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef void		*(*t_function)(void *);
typedef void		*(*t_bifunction)(void *, void *);
typedef void		(*t_consumer)(void *);
typedef void		(*t_biconsumer)(void *, void *);

#endif
