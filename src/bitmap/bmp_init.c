#include "bitmap.h"
#include "ftmemory.h"
#include "ftstring.h"

t_bitmap	*bmp_init(int width, int height)
{
	t_bitmap	*bitmap;
	int			pixelbytesize;

	bitmap = ft_calloc(1, sizeof(t_bitmap));
	if (!bitmap)
		return (NULL);
	pixelbytesize = width * height * 32;
	bitmap->body = ft_calloc(1, pixelbytesize);
	if (!bitmap->body)
	{
		free(bitmap);
		return (NULL);
	}
	ft_strcpy((char *)bitmap->header.file.signature, "BM");
	bitmap->header.file.filesize = pixelbytesize + sizeof(t_bitmap);
	bitmap->header.file.fileoffset_to_pixelarray = sizeof(t_bmpheader);
	bitmap->header.infos.dibheadersize = sizeof(t_bmpinfoheader);
	bitmap->header.infos.width = width;
	bitmap->header.infos.height = height;
	bitmap->header.infos.planes = 1;
	bitmap->header.infos.bitsperpixel = 32;
	bitmap->header.infos.imagesize = pixelbytesize;
	return (bitmap);
}