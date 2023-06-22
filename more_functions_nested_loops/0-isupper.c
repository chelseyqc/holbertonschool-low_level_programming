#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: input character
*
* Return: 1 if true or 0 if false
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
