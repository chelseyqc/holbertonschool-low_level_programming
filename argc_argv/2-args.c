#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: count of arguments
* @argv: array of pointers to strings
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (argv[index] != argv[argc])
	{
		printf("%s\n", argv[index]);
		index = index + 1;
	}
	return (0);
}
