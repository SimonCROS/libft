#include "bitmap.h"
#include <unistd.h>
#include <fcntl.h>

int	bmp_save(char *output, t_bitmap *bitmap)
{
	int	fd;

	fd = open(output, O_WRONLY | O_CREAT, S_IROTH | S_IWOTH);
	if (fd == -1)
		return (0);
	bmp_write(fd, bitmap);
	close(fd);
	return (1);
}

void	bmp_write(int fd, t_bitmap *bitmap)
{
	write(fd, &(bitmap->header), sizeof(t_bmpheader));
	write(fd, bitmap->body, bitmap->header.infoheader.imagesize);
}
