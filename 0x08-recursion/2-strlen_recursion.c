#include <stdio.h>
/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s: string pointer
 *
 * Return: return 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string reached */
	{
		return (0);
	}
	/* Recursively calls function with the next character and add 1 to result */
	return (1 + _strlen_recursion(s + 1));
}
