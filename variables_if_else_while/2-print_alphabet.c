#include <stdio.h>

/**
 * main - prints the alphabet in
 * lowercase followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c = 'a');
		c = c + 1;
	}
		putchar('\n');
	return (0);
}
