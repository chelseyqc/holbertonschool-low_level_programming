#ifndef _VARIADIC_FUNC_H_
#define _VARIADIC_FUNC_H_
#include <stdarg.h>

/**
* struct type - struct type to match format
* @f_type: type of argument
* @f: function pointer for the argument to be used
*/

typedef struct type
{
	char *f_type;
	void (*f)(va_list args);
} type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
