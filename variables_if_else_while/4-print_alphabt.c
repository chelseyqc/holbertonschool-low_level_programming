#include <stdio.h>

/**
 * main - prints alphabet in lowercase,
 * except for q and e
 *
 * Return: 0
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		putchar(l);
		l = l + 1;
	}
	putchar('\n');
	return (0);
}
