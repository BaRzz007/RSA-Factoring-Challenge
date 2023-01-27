#include "factors.h"

/**
 * factorize - prints the factors of @num
 * @num: number to be factorized
 */
void factorize(char *str)
{
	unsigned long i;
	mpz_t rem, num;

	mpz_init(rem);
	mpz_init(num);
	mpz_set_ui(rem, 0);
	mpz_set_ui(num, 0);
	mpz_set_str(num, str, 10);
	i = 2;
	while (1)
	{
		if (mpz_mod_ui(rem, num, i) == 0)
		{
			mpz_cdiv_q_ui(rem, num, i);
			mpz_out_str(stdout, 10, num);
			printf("=");
			mpz_out_str(stdout, 10, rem);
			printf("*%lu\n", i);
			/**
			 * mpz_out_str(stdout, 10, num2);
			 * printf("*%lu\n", i);
			 * printf("%.0Lf=%.0Lf*%.0f\n", num, num / i, i); 
			 */
			break;
		}
		else
		{
			i++;
			continue;
		}
	}
	mpz_clear(rem);
	mpz_clear(num);
}
