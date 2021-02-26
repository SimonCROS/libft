/**
 * @brief Convert a string to a float
 * 
 * @param str the string to convert
 * @return float the final float
 */

float	ft_atof(const char **str)
{
	int		dot;
	float	ret;
	float	mul;

	ret = 0;
	mul = 1;
	dot = 0;
	if (**str == '-')
	{
		(*str)++;
		mul = -1;
	}
	while ((**str >= '0' && **str <= '9') || (**str == '.' && !dot))
	{
		if (**str == '.')
			dot = 1;
		else
		{
			if (dot)
				mul /= 10.0f;
			ret = ret * 10.0f + (float)(**str - '0');
		}
		(*str)++;
	}
	return (ret * mul);
}

/**
 * @brief Check is a string is at float format ('^[0-9]+(\.[0-9])?$')
 * 
 * @param str the string to convert
 * @param result the float
 * @return if the string is a float
 */

int	is_float(char *str)
{
	int	dot;

	dot = 0;
	if (!(*str))
		return (0);
	if (*str == '-')
		str++;
	while ((*str >= '0' && *str <= '9') || (*str == '.' && !dot))
	{
		if (dot)
			dot++;
		if (*str == '.')
			dot = 1;
		else if (dot == 1)
			return (0);
		str++;
	}
	return (!(*str));
}
