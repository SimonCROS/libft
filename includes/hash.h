/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:44:41 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:20:15 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H

# include "libft.h"

typedef struct		s_hentry
{
	char			*key;
	void			*value;
	struct s_hentry	*next;
}					t_hentry;

typedef struct		s_hash
{
	t_biconsumer	del;
	t_hentry		*first;
}					t_hash;

void				*ft_hash_replace(t_hash *hash, char *key, void *new_value);
void				ft_hash_foreach(t_hash *hash, t_biconsumer visitor);
void				ft_hash_put(t_hash *hash, char *key, void *element);
t_hentry			*ft_hash_get_entry(t_hash *hash, char *key);
t_hentry			*ft_hash_new_entry(char *key, void *value);
t_hentry			*ft_hash_remove(t_hash *hash, char *key);
void				*ft_hash_get(t_hash *hash, char *key);
int					ft_hash_is_empty(t_hash *hash);
void				ft_hash_destroy(t_hash *hash);
t_hash				*ft_hash_new(t_biconsumer del);
void				ft_hash_clear(t_hash *hash);
int					ft_hash_size(t_hash *hash);

#endif
