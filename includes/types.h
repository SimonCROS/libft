/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:06:43 by scros             #+#    #+#             */
/*   Updated: 2020/12/10 11:27:54 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef void		*(*t_function)(void *);
typedef void		*(*t_bifunction)(void *, void *);
typedef void		(*t_consumer)(void *);

typedef struct		s_entry
{
	void			*value;
	struct s_entry	*next;
}					t_entry;

typedef struct		s_list
{
	t_consumer		delete;
	struct s_entry	*first;
	int				size;
}					t_list;

#endif
