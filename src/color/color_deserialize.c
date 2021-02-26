#include "color.h"
#include "convert.h"
#include "string.h"

static int	is_uchar(char *str)
{
	float	ret;

	ret = 0;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + (*(str++) - '0');
	return (!(*str) && ret < 256);
}

/**
 * @brief Deserialize a color at format "r,g,b"
 * 
 * @param str the color at string format
 * @param str the container of the new color
 * @return the result of the operation : 1 if no error, 0 else
 */

int	color_deserialize(const char *str, t_color *color)
{
	char	**v;
	int		modified;

	modified = 0;
	v = ft_split(str, ',');
	if (v[0] && v[1] && v[2])
	{
		if (is_uchar(v[0]) && is_uchar(v[0]) && is_uchar(v[0]))
		{
			*color = color_new(ft_atoi(v[0]), ft_atoi(v[1]), ft_atoi(v[2]));
			modified = 1;
		}
		free(v[0]);
		free(v[1]);
		free(v[2]);
	}
	free(v);
	return (modified);
}
