#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0 WithoutUsingChar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
