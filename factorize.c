#include "factors.h"

/**
 * factorize - prints the factors of @num
 * @num: number to be factorized
 */
void factorize(long double num)
{
	double i;
	double rem;

	for (i = 2; i <= num / 2; i++)
	{
		rem = fmod(num, i);
		if (rem == 0)
		{
			printf("%.0Lf=%.0Lf*%.0f\n", num, num / i, i);
			break;
		}
		else
			continue;
	}
}
