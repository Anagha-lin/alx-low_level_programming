#include  "stdio.h"
/**
* print_chessboard - print chessboard
* @a: char
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
		i++;
	}
}
