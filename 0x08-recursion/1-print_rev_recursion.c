#include <stdio.h>
/**
 * _print_rev_recursion -  a function that prints a string in reverse
 * @s: string pointer
 *
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string reached */
	{
	return;
	}
	/* Recursively call the function with the next character */
	_print_rev_recursion(s + 1);
	putchar(*s);  /* Print the current character */
}
