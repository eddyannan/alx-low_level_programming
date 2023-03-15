#include <stdlib.h>
/**
 * create_array -  creates array of chars & initializes with specific char
 * @c: character variable c
 * @size: size value
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* If size is 0, return NULL */
	if (size == 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* If allocation fails, return NULL */
	if (array == NULL)
	{
		return (NULL);
	}
	/* Initialize the array with the specified char */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/* Return the pointer to the array */
	return (array);
}
