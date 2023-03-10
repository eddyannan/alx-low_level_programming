#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if strings are identical
 * @s1: pointer to char s1
 * @s2: pointer to char s2
 * Return: return void
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	/* If the current characters match, move to the next character */
	if (*s1 == *s2 || *s2 == '*')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*s1 != '\0')
		{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		else
		{
		return (wildcmp(s1, s2 + 1));
		}
	}
	/* If none of the above conditions are true, the strings are not identical */
	return (0);
}
