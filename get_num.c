#include "factors.h"

/**
 * readln - reads a line from a file
 * @fd: file descriptor
 * Return: one line from file
 */
char *readln(int fd)
{
	char buf, *buffer;
	int n_read;

	buf = '\0';

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		return (NULL);
	}
	buffer[0] = '\0';

	n_read = 1;
	while (n_read > 0)
	{
		n_read = read(fd, &buf, 1);
		if (buf == '\n')
			return (buffer);

		strncat(buffer, &buf, 1);
	}

	free(buffer);
	return (NULL);
}

/**
 * parseln - Gets number on line
 * @line: line
 * Return: number on line
 */
char *parseln(char *line)
{
	char *delim, *parsed_line;

	delim = "\n\t ";
	parsed_line = strtok(line, delim);

	return parsed_line;
}
