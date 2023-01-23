#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(void)
{
	long double num;
	char *str;

	str = malloc(sizeof(char) * 23);
	str = strcpy(str, "1718944270642558716715");
	errno = 0;
	num = strtold(str, NULL);
	printf("str: %s\nnum: %.0Lf\nnm2: %.0f\n", str, num, 1718944270642558716715.0);
	if (errno == ERANGE)
		printf("errno: %d\n", errno);
	return (0);
}
