#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* check_num - checks of comprised of digits
* @s: input string
*
* Return: 1 if only digits, otherwise 0
*/
int check_num(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (isdigit(s[index]) == 0)
		{
			return (1);
		}
		index = index + 1;
	}
	return (0);
}

/**
* main - adds positive numbers and prints the result
* @argc: count of arguments
* @argv: array of pointers to the strings
*
* Return: the result
*/
int main(int argc, char *argv[])
{
	int counter;
	int result;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	counter = 1;
	result = 0;
	while (counter < argc)
	{
		if (check_num(argv[counter]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[counter]);
		counter = counter + 1;
	}
	printf("%d\n", result);
	return (0);
}
