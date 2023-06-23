#include <stdio.h>

/**
* main - prints numbers from 1 to 100, multiples of 3 prints 'Fizz'
* and multiples of 5 prints 'Buzz'
*
* Return: 0
*/
int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", number);
		}
		number = number + 1;
	}
	printf("\n");
	return (0);
}
