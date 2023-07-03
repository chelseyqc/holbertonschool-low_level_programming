#include "main.h"

/**
* sq_rt - finds the natural square root of a number
* @num: the input number
* @root: starting number to find root
*
* Return: the natural square root of a number or -1
*/
int sq_rt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root > num)
	{
		return (-1);
	}
	return (sq_rt(num, root + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: input number
*
* Return: square root or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sq_rt(n, 1));
}
