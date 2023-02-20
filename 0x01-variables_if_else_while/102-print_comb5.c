#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int a = i / 10;
			int b = i % 10;
			int c = j / 10;
			int d = j % 10;
			/*putchar(a + '0');*/
			putchar(a + 48);
			/*putchar(b + '0');*/
			putchar(b + 48);
			/*putchar(' ');*/
			putchar(32);
			/*putchar(c + '0');*/
			putchar(c + 48);
			/*putchar(d + '0');*/
			putchar(d + 48);
			if (i != 99 || j != 99)
			{
			/*putchar(',');*/
			putchar(44);
			/*putchar(' ');*/
			putchar(32);
			}
		}
	}
	return (0);
}
