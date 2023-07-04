#include "main.h"
#include <stdio.h>

/**
* main - program prints its name, followed by a new line
* @argc: count of arguments
* @argv: array of pointers to strings
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
