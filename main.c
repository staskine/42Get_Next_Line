
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;

	fd = open("doc.txt", O_RDONLY);
	if (!fd)
	{
		printf("No fd!");
		return (0);
	}
	char *res = get_next_line(fd);
	while (res)
	{
		printf("%s", res);
		res = get_next_line(fd);
	}
	close(fd);
	free(res);
	return (0);
}