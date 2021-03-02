#ifndef BITMAP_H
# define BITMAP_H

# include <stdlib.h>

typedef struct s_bmpfileheader
{
	uint8_t		signature[2];
	uint32_t	filesize;
	uint32_t	reserved;
	uint32_t	fileoffset_to_pixelarray;
}	t_bmpfileheader;

typedef struct s_bmpinfoheader
{
	uint32_t	dibheadersize;
	uint32_t	width;
	uint32_t	height;
	uint16_t	planes;
	uint16_t	bitsperpixel;
	uint32_t	compression;
	uint32_t	imagesize;
	uint32_t	ypixelpermeter;
	uint32_t	xpixelpermeter;
	uint32_t	numcolorspallette;
	uint32_t	mostimpcolor;
}	t_bmpinfoheader;

typedef struct s_bmpheader
{
	t_bmpfileheader	fileheader;
	t_bmpinfoheader	infoheader;
}	t_bmpheader;

typedef struct s_bitmap
{
	t_bmpheader		header;
	uint32_t		*body;
}	t_bitmap;

t_bitmap	*bitmap_init(uint32_t width, uint32_t height
	, uint16_t bitsperpixel);
t_bitmap	*bitmap_write(int fd, t_bitmap birmap);

#endif
