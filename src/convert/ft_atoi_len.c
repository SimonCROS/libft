/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:26:15 by scros             #+#    #+#             */
/*   Updated: 2020/12/13 15:05:47 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_len(const char *str, int *len)
{
	long	num;
	int		mult;

	num = 0;
	*len = 0;
	mult = 1;
	while (str[*len] == ' ' || (str[*len] >= 9 && str[*len] <= 13))
		(*len)++;
	if (str[*len] == '-' || str[*len] == '+')
		if (str[(*len)++] == '-')
			mult *= -1;
	while (str[*len] >= '0' && str[*len] <= '9')
	{
		num = num * 10 + (str[(*len)++] - '0');
		if (num < 0)
		{
			if (mult < 0)
				return (0);
			return (-1);
		}
	}
	return ((int)(num * mult));
}
