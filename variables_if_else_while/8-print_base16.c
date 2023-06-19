#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	int n = 0;
	char base;

	base = 'a';
	while (n < 10)
	{
		putchar('0' + n);
		n = n + 1;
	}

	while (base <= 'f')
	{
		putchar(base);
		base = base + 1;
	}
	putchar('\n');
	return (0);
}
