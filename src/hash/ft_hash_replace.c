/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_replace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:42:35 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:55 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_hash_replace(t_hash *hash, char *key, void *new_value)
{
	t_hentry	*entry;
	void		*buf;

	if (!(entry = ft_hash_get_entry(hash, key)))
		return (NULL);
	buf = entry->value;
	entry->value = new_value;
	return (buf);
}
