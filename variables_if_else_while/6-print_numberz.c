#include <stdio.h>

/**
* main - prints digits of base 10 starting from 0
* without using char, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
