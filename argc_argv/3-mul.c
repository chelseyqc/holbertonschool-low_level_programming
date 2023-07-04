#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers and prints the result
* @argc: count of the arguments
* @argv: array of pointers to the strings
*
* Return: the result
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
