#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 1-0 WithoutUsingChar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	return (0);
}
