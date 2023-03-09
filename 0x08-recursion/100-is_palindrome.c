#include <stdio.h>
#include <string.h>
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char s
 * Return: return void
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	int result;

	if (len <= 1)
	{
	/* base case: string is empty or has only one character */
	return (1);
	}
	if (*s == *(s + len - 1))
{
	/* null terminate the string temporarily */
	*(s + len - 1) = '\0';
	/* recursive call with shortened string */
	result = is_palindrome(s + 1);

	/* restore the original character */
	*(s + len - 1) = *(s + len);
	return (result);
	}
	else
	{
	/* not a palindrome */
	return (0);
	}
}
