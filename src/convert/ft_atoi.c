/**
 * @brief Convert a string to a int
 * 
 * @param str the string to convert
 * @param result the final int, same result as ft_atof
 * @return 1 if the result matches ('^-?[0-9]+$'), 0 else
 */

int	ft_atoi_full(char *str, int *result)
{
	int	ret;
	int	mul;

	ret = 0;
	mul = 1;
	if (*str == '-')
	{
		str++;
		mul = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	*result = ret * mul;
	return (!(*str));
}

/**
 * @brief Convert a string to a int
 * 
 * Exemple
 * `ft_atoi("42") == 42`
 * `ft_atoi("") == 0`
 * `ft_atoi("1234.5 1") == 1234.5`
 * `ft_atoi(".21") == 0.21`
 * 
 * @param str the string to convert
 * @return the final int
 */

int	ft_atoi(char *str)
{
	int	ret;
	int	mul;

	ret = 0;
	mul = 1;
	if (*str == '-')
	{
		str++;
		mul = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret * mul);
}

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
