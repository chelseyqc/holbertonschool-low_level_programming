#include <stdio.h>

/**
* main - prints all possible combinations of
* single digit numbers
*
* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
