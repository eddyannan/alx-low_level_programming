#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of ints
 * @a: int pointer
 * @size: int
 *
 * Return: return void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
