#include "bitmap.h"
#include <math.h>

void	bmp_set_pixel(t_bitmap *bitmap, uint32_t x, uint32_t y, t_color color)
{
	t_bmpinfoheader	*infos;
	uint32_t		pos;

	infos = &(bitmap->header.infos);
	pos = ((infos->height - y - 1) * infos->width + x) * (infos->bitsperpixel / 8);	bitmap->body[pos] = (uint8_t)(fminf(color.b, 1) * 255);
	bitmap->body[pos + 1] = (uint8_t)(fminf(color.g, 1) * 255);
	bitmap->body[pos + 2] = (uint8_t)(fminf(color.r, 1) * 255);
	bitmap->body[pos + 3] = 0x0;
}
