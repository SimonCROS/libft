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
	if (*((*str)++) == '-')
		mul = -1;
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
 * @brief Convert a string to a float only if the string is fully translated
 * 
 * @param str the string to convert
 * @param result the float
 * @return if the string is fully translated
 */

int	is_float(const char **str)
{
	int		dot;
	float	ret;
	float	mul;

	ret = 0;
	mul = 1;
	dot = 0;
	if (*((*str)++) == '-')
		mul = -1;
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
