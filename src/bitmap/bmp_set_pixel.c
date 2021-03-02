#include "bitmap.h"
#include <math.h>

void	bmp_set_pixel(t_bitmap *bitmap, uint32_t x, uint32_t y, t_color color)
{
	uint32_t	pos;
	uint16_t	bytes_per_pixel;

	pos = (bitmap->header.infoheader.height - y) * x;
	bytes_per_pixel = bitmap->header.infoheader.bitsperpixel / 8;
	bitmap->body[pos] = (unsigned char)fminf(color.r, 1) * 255;
	bitmap->body[pos + 1] = (unsigned char)fminf(color.r, 1) * 255;
	bitmap->body[pos + 2] = (unsigned char)fminf(color.r, 1) * 255;
}
