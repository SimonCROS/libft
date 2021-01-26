/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_new_entry.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:08:54 by scros             #+#    #+#             */
/*   Updated: 2021/01/26 15:19:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_hentry	*ft_hash_new_entry(char *key, void *value)
{
	t_hentry	*entry;

	if (!(entry = malloc(sizeof(t_hentry))))
		return (NULL);
	entry->key = key;
	entry->value = value;
	entry->next = NULL;
	return (entry);
}
