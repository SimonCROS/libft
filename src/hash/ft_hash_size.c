/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:57 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hash_size(t_hash *hash)
{
	t_hentry	*entry;
	int			i;

	if (ft_hash_is_empty(hash))
		return (0);
	entry = hash->first;
	i = 1;
	while (entry->next)
	{
		entry = entry->next;
		++i;
	}
	return (i);
}
