#include <unistd.h>
/**
 * main - a C program that prints an exact statement
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int length = 59; /* length of the message*/

	/*Write the message to the standard error*/
	write(STDERR_FILENO, message, length);

	/* Return 1 to indicate an error occurred */
	return (1);
}
