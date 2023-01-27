#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <gmp.h>

int main(void)
{
	mpz_t n;
	long double num;
	char *str;

	mpz_init(n);
	mpz_set_ui(n, 0);
	mpz_set_str(n, "1718944270642558716715", 10);
	printf("n  : ");
	mpz_out_str(stdout, 10, n);
	printf("\n");
	str = malloc(sizeof(char) * 23);
	str = strcpy(str, "1718944270642558716715");
	errno = 0;
	num = strtold(str, NULL);
	printf("str: %s\nnum: %.0Lf\nnm2: %.0f\n", str, num, 1718944270642558716715.0);
	if (errno == ERANGE)
		printf("errno: %d\n", errno);
	free(str);
	mpz_clear(n);
	return (0);
}
