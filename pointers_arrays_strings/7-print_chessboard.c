#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: the row in the 2D array
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int index_a;
	int index_b;

	index_a = 0;
	while (index_a < 8)
	{
		while (index_b < 8)
		{
			_putchar(a[index_a][index_b]);
			index_b = index_b + 1;
		}
		_putchar('\n');
		index_a = index_a + 1;
		index_b = 0;
	}
}
