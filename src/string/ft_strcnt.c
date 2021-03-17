/**
 * @brief Count the number of occurences of the character c in the string str.
 * 
 * @param str The string
 * @param c The char to find
 * @return the number of occurences
 */
int	ft_strcnt(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}
