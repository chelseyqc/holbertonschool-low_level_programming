#include "main.h"

/**
* times_table - prints the 9 times table starting with 0
*
* Returns: void
*/
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;

	while (x <= 9)
	{
		while (y <= 9)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}
			if (z <= 9 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			y = y + 1;
		}
		_putchar('\n');
		x = x + 1;
		y = 0;
	}
}
