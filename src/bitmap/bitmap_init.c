#include "bitmap.h"
#include "ftmemory.h"
#include "ftstring.h"

t_bitmap	*bitmap_init(uint32_t width, uint32_t height, uint16_t bitsperpixel)
{
	t_bitmap	*bitmap;
	uint32_t	pixelbytesize;

	bitmap = ft_calloc(1, sizeof(t_bitmap));
	if (!bitmap)
		return (NULL);
	pixelbytesize = width * height * bitsperpixel / 8;
	bitmap->body = malloc(pixelbytesize);
	if (!bitmap->body)
	{
		free(bitmap);
		return (NULL);
	}
	ft_strcpy(bitmap->header.fileheader.signature, "BM");
	bitmap->header.fileheader.filesize = pixelbytesize + sizeof(t_bitmap);
	bitmap->header.fileheader.fileoffset_to_pixelarray = sizeof(t_bitmap);
	bitmap->header.infoheader.dibheadersize = sizeof(t_bmpinfoheader);
	bitmap->header.infoheader.width = width;
	bitmap->header.infoheader.height = height;
	bitmap->header.infoheader.planes = 1;
	bitmap->header.infoheader.bitsperpixel = bitsperpixel;
	bitmap->header.infoheader.imagesize = pixelbytesize;
	return (bitmap);
}
