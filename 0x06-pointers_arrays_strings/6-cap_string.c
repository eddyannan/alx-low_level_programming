#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to str
 * Return: return str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || isspace(str[i - 1]) || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!'
|| str[i - 1] == '?'
|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
|| str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
