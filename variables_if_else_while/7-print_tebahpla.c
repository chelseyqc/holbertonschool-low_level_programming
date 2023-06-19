#include <stdio.h>

/**
* main - prints lowercase alphabet in reverse
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	char reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse = reverse - 1;
	}
	putchar('\n');
	return (0);
}
