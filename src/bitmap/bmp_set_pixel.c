#include "bitmap.h"
#include <math.h>

void	bmp_set_pixel(t_bitmap *bitmap, int x, int y, t_color color)
{
	int		pos;
	short	bytes_per_pixel;

	pos = (bitmap->header.infoheader.height - y) * x;
	bytes_per_pixel = bitmap->header.infoheader.bitsperpixel / 8;
	bitmap->body[pos] = (unsigned char)fminf(color.r, 1) * 255;
	bitmap->body[pos + 1] = (unsigned char)fminf(color.r, 1) * 255;
	bitmap->body[pos + 2] = (unsigned char)fminf(color.r, 1) * 255;
}
