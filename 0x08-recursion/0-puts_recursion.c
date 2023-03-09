#include <stdio.h>

/**
 * _puts_recursion -prints a string, followed by a new line
 * @s: string pointer
 *
 * Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string reached */
	{
		putchar('\n');
		return;
	}
	putchar(*s);  /* Print the current character */
	/* Recursively call the function with the next character */
	_puts_recursion(s + 1);
}
