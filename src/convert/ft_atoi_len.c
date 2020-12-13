/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:26:15 by scros             #+#    #+#             */
/*   Updated: 2020/12/13 14:53:36 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_len(const char *str, int *len)
{
	long	num;
	int		i;
	int		mult;

	num = 0;
	i = 0;
	mult = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			mult *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
		if (len)
			*len = i;
		if (num < 0)
		{
			if (mult < 0)
				return (0);
			return (-1);
		}
	}
	return ((int)(num * mult));
}
