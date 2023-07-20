#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes
* @argc: argument count
* @argv: contains the arguments
*
* Return: 1 if argument count error or 2 if number of bytes is negative
*/
int main(int argc, char *argv[])
{
	int bytes;
	int index;
	char *prntz_opcode;

	prntz_opcode = (char *)main;
	bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	index = 0;
	while (index < bytes)
	{
		printf("%02x", prntz_opcode[index] & 0xFF);
		if (index < bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		index = index + 1;
	}
}