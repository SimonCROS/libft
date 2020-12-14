/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:41:48 by scros             #+#    #+#             */
/*   Updated: 2020/12/14 14:52:19 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_clear(t_list *list)
{
	t_entry *buf;

	if (ft_lst_is_empty(list))
		return ;
	while ((buf = ft_lst_shift_entry(list)))
	{
		if (list->del)
			list->del(buf->value);
		free(buf);
	}
}
