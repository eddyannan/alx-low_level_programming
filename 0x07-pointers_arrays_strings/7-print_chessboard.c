#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_chessboard - a function that prints a chessboard
 * @a: array pointer
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
		{
		printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
