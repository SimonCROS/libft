#ifndef BITMAP_H
# define BITMAP_H

# include <stdlib.h>
# include <unistd.h>
# include "color.h"

typedef struct s_bmpfileheader
{
	char	signature[2];
	int		filesize;
	int		reserved;
	int		fileoffset_to_pixelarray;
} __attribute__((__packed__))t_bmpfileheader;

typedef struct s_bmpinfoheader
{
	int		dibheadersize;
	int		width;
	int		height;
	short	planes;
	short	bitsperpixel;
	int		compression;
	int		imagesize;
	int		ypixelpermeter;
	int		xpixelpermeter;
	int		numcolorspallette;
	int		mostimpcolor;
} __attribute__((__packed__))t_bmpinfoheader;

typedef struct s_bmpheader
{
	t_bmpfileheader	file;
	t_bmpinfoheader	infos;
} __attribute__((__packed__))t_bmpheader;

typedef struct s_bitmap
{
	t_bmpheader	header;
	char		*body;
}	t_bitmap;

t_bitmap	*bmp_init(int width, int height);
void		bmp_set_pixel(t_bitmap *bitmap, int x, int y, t_color color);
int			bmp_save(char *output, t_bitmap *bitmap);
ssize_t		bmp_write(int fd, t_bitmap *bitmap);

#endif
