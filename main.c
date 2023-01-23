#include "factors.h"

int main(int argc, char *argv[])
{
	int fd;
	char *buffer;
	double num;

	(void) argc;
	fd = open(argv[1], O_RDONLY);

	while ((buffer = readln(fd)))
	{
		num = parseln(buffer);
		factorize(num);
	}

	return (EXIT_SUCCESS);
}
