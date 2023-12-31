#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number inputted
*
* Return: the factorial of n
*/
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
