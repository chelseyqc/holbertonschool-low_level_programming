#include <stdio.h>

/**
 * main - prints all single digits
 * of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d\n", num);
		num = num + 1;
	}
	return (0);
}
