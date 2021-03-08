/**
 * @brief Convert a string to a unsigned long
 * 
 * @param str the string to convert
 * @param result the final unsigned long, same result as ft_atof
 * @return 1 if the result matches ('^-?[0-9]+$'), 0 else
 */

int	ft_atoul_full(char *str, unsigned long *result)
{
	unsigned long	ret;

	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	*result = ret;
	return (!(*str));
}

/**
 * @brief Convert a string to a unsigned long
 * 
 * Exemple
 * `ft_atoul("42") == 42`
 * `ft_atoul("") == 0`
 * `ft_atoul("1234.5 1") == 1234.5`
 * `ft_atoul(".21") == 0.21`
 * 
 * @param str the string to convert
 * @return the final unsigned long
 */

unsigned long	ft_atoul(char *str)
{
	unsigned long	ret;

	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret);
}
