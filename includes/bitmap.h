#ifndef BITMAP_H
# define BITMAP_H

# include <stdlib.h>
# include "color.h"

typedef struct s_bmpfileheader
{
	char	signature[2];
	int		filesize;
	int		reserved;
	int		fileoffset_to_pixelarray;
}	t_bmpfileheader;

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
}	t_bmpinfoheader;

typedef struct s_bmpheader
{
	t_bmpfileheader	fileheader;
	t_bmpinfoheader	infoheader;
}	t_bmpheader;

typedef struct s_bitmap
{
	t_bmpheader		header;
	int				*body;
}	t_bitmap;

t_bitmap	*bmp_init(int width, int height, short bytesperpixel);
void		bmp_set_pixel(t_bitmap *bitmap, int x, int y,
				t_color color);
int			bmp_save(char *output, t_bitmap *bitmap);
void		bmp_write(int fd, t_bitmap *bitmap);

#endif
