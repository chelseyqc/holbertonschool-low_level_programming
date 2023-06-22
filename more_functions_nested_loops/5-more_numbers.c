#include "main.h"

/**
* more_numbers - prints the numbers 0 to 14 ten times
* followed by a new line
*
* Return: void
*/
void more_numbers(void)
{
	int num;
	int times;

	times = 0;
	while (times < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9 && num <= 14)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num = num + 1;
		}
		_putchar('\n');
		times = times + 1;
	}
}
