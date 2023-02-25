#include <stdio.h>
typedef long long ll; /*define a custom type for long long integers*/

/**
 * main - print the largest prime factor
 * Return: Always 0.
 */

int main(void)
{
	ll number = 612852475143; /*use LL to indicate a long long integer*/
	ll factor = 2; /*start with smallest prime factor*/

	while (number > 1)
	{/* keep going until number is completely factored*/
		if (number % factor == 0)
		{/* found a factor*/
			number /= factor; /*divide by the factor*/
		} else
		{/*factor is not a divisor*/
			factor++; /*try the next factor*/
		}
	}

	printf("%lld\n", factor); /*print the largest prime factor*/
	return (0);
}
