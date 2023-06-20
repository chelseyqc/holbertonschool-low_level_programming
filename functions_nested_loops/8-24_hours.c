#include "main.h"

/**
* jack_bauer - prints every minute of the day
* of Jack Bauer starting from 00:00 to 23:59
*
* Return: void
*/
void jack_bauer(void)
{
	int hour = 0, min = 0;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min = min + 1;

			if (min > 59)
			{
				hour = hour + 1;
				min = 0;
			}
		}
	}
}
