#include "main.h"

/**
* _atoi - a function that converts a string to an integer
* @s: the string
*
* Return: the integer or 0 if none
*/
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	int index;

	num = 0;
	sign = 1;
	index = 0;
	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
	{
		if (s[index] == '-')
		{
			sign = sign * -1;
		}
		index = index + 1;
	}
	if (s[index] != '\0')
	{
		while (s[index] >= '0' && s[index] <= '9')
		{
			num = num * 10 + (s[index] - '0');
			index = index + 1;
		}
	}
	return (num * sign);
}
