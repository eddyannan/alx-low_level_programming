#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positve, zero or negative
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{
	/*srand(time(0));*/
	i = 0; /*rand() - RAND_MAX / 2;*/
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
