#include "factors.h"

int main(int argc, char *argv[])
{
	int fd;
	char *buffer, *num;

	if (argc == 1 || argc > 2)
	{
		fprintf(stderr, "USAGE: factors <file>\n");
		return (EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while ((buffer = readln(fd)))
	{
		num = parseln(buffer);
		factorize(num);
	}
	free(num);

	return (EXIT_SUCCESS);
}
