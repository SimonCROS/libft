/**
 * @brief Convert a string to a float
 * 
 * @param str the string to convert
 * @param result the final float, same result as ft_atof
 * @return 1 if the result matches ('^-?[0-9]*(\.[0-9]+)?$'), 0 else
 */
int	ft_atof_full(char *str, float *result)
{
	int		dot;
	float	ret;
	float	mul;

	ret = 0;
	mul = 1;
	dot = 0;
	if (*str == '-' && str++)
		mul = -1;
	while ((*str >= '0' && *str <= '9') || (*str == '.' && !dot))
	{
		if (dot)
			dot++;
		if (*str == '.')
			dot = 1;
		else
		{
			if (dot)
				mul /= 10.0f;
			ret = ret * 10.0f + (float)(*str - '0');
		}
		str++;
	}
	*result = ret * mul;
	return (!(*str) && dot != 1);
}

/**
 * @brief Convert a string to a float
 * 
 * Exemple
 * `ft_atof("42") == 42`
 * `ft_atof("") == 0`
 * `ft_atof("1234.5 1") == 1234.5`
 * `ft_atof(".21") == 0.21`
 * 
 * @param str the string to convert
 * @return the final float
 */
float	ft_atof(char *str)
{
	int		dot;
	float	ret;
	float	mul;

	ret = 0;
	mul = 1;
	dot = 0;
	if (*str == '-')
	{
		str++;
		mul = -1;
	}
	while ((*str >= '0' && *str <= '9') || (*str == '.' && !dot))
	{
		if (*str == '.')
			dot = 1;
		else
		{
			if (dot)
				mul /= 10.0f;
			ret = ret * 10.0f + (float)(*str - '0');
		}
		str++;
	}
	return (ret * mul);
}
