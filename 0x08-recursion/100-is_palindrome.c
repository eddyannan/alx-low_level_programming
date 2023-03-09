#include <stdio.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char s
 * Return: return void
 */
int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
	{
	/* empty string is a palindrome */
		return (1);
	}
	end = s;

	while (*end != '\0')
	{
	/* find the end of the string */
	end++;
	}
	/* back up to the last character */
	end--;
	while (s < end)
	{
	/* compare characters from start to end */
	if (*s != *end)
	{
	/* not a palindrome */
	return (0);
	}
	/* move the start pointer forward */
	s++;
	/* move the end pointer backward */
	end--;
	}
	/* palindrome */
	return (1);
}
