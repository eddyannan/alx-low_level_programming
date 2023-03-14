#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits string into words
 * @str: pointer to pointer to char
 * Return: return words
 */
char **strtow(char *str)
{
	int num_words;
	char *word;
	char **words;
	int index;
	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	} /* Count the number of words in the string */ num_words = 0;
	word = strtok(str, " ");

	while (word != NULL)
	{
		num_words++;
		word = strtok(NULL, " ");
	} /* Allocate memory for the array of words */
	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	} /* Copy each word into the array */ index = 0;
	word = strtok(str, " ");

	while (word != NULL)
	{
	words[index] = (char *)malloc((strlen(word) + 1) * sizeof(char));
		if (words[index] == NULL)
		{
			for (i = 0; i < index; i++)
			{
				free(words[i]);
			} free(words);
			return (NULL);
		} strcpy(words[index], word);
		index++;
		word = strtok(NULL, " ");
	} words[index] = NULL;
	return (words);
}
