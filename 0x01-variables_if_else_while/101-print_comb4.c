#include <stdio.h>
/**
 * main - prints all possible different combinations of three digit nums
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				/*putchar(i + '0');*/
				putchar((char)(i + 48));
				/*putchar(j + '0');*/
				putchar((char)(j + 48));
				/*putchar(k + '0');*/
				putchar((char)(k + 48));
				if (i != 7 || j != 8 || k != 9)
				{
					/*putchar(',');*/
					putchar(44);
					/*putchar(' ');*/
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
