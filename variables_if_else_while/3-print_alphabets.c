#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * and then in uppercase,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char l;
	char c;

	l = 'a';
	c = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l = l + 1;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
