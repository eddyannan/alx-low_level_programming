#include <stdio.h>
#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: a pointer to the memory area to be filled with const byte
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to fill with the constant byte
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
