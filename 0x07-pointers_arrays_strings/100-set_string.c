#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_string - a function that sets value of a pointer to a char
 * @s: string pointer to pointer
 * @to: character pointer
 *
 * Return: return void
 */
void set_string(char **s, char *to)
{
	int len = strlen(to);

	char *new_s = malloc((len + 1) * sizeof(char));

	if (new_s == NULL)
	{
		printf("Error: failed to allocate memory\n");
		return;
	}
	strcpy(new_s, to);
	free(*s);
	*s = new_s;
}
