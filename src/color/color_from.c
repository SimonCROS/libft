#include "libft.h"

t_color	color_newa(unsigned char r, unsigned char g, unsigned char b
	, unsigned char a)
{
	t_color	color;

	color.r = r / (float)255;
	color.g = g / (float)255;
	color.b = b / (float)255;
	color.a = a / (float)255;
	return (color);
}

t_color	color_from_hexa(unsigned int hex)
{
	t_color	color;

	color.a = (255 - (unsigned char)(hex >> 24)) / (float)255;
	color.r = (unsigned char)(hex >> 16) / (float)255;
	color.g = (unsigned char)(hex >> 8) / (float)255;
	color.b = (unsigned char)(hex) / (float)255;
	return (color);
}

t_color	color_new(unsigned char r, unsigned char g, unsigned char b)
{
	return (color_newa(r, g, b, 255));
}

t_color	color_from_hex(unsigned int hex)
{
	return (color_from_hexa(0x00ffffff & hex));
}
