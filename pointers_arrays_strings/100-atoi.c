#include "main.h"

/**
* _atoi - a function that converts a string to an integer
* @s: the string
*
* Return: the integer or 0 if none
*/
int _atoi(char *s)
{
	int index;
	int sign_of_n;
	int current_int;

	index = 0;
	current_int = 0;
	sign_of_n = 1;
	while (s[index] == ' ')
	{
		index = index + 1;
	}
	if (s[index] == '-')
	{
		sign_of_n = -1;
		index = index + 1;
	}
	else if (s[index] == '+')
	{
		index = index + 1;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		current_int = current_int * 10 + (s[index] - '0');
		index = index + 1;
	}
	return (sign_of_n * current_int);
}
