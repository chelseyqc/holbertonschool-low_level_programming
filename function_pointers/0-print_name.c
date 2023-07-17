#include <stdio.h>

/**
* print_name - call a function to print a name
* @name: name of the person
* @f: the pointer to call the function
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
