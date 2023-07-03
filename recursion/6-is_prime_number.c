#include "main.h"

/**
* is_it_prime - checks if the number is a prime number
* @num: number to be checked
* @div: divisible by
*
* Return: 1 if prime, 0 if false
*/
int is_it_prime(int num, int div)
{
	if (num < 2)
	{
		return (0);
	}
	if ((num % div == 0) && (div < num))
	{
		return (0);
	}
	if (div == num)
	{
		return (1);
	}
	return (is_it_prime(num, div + 1));
}

/**
* is_prime_number - checks if input int is a prime number
* @n: input integer
*
* Return: 1 if prime, 0 if false
*/
int is_prime_number(int n)
{
	return (is_it_prime(n, 2));
}
