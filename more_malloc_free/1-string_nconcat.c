#include <stdlib.h>
#include "main.h"

/**
* _strlen - returns string length
* @str: string
*
* Return: string length
*/
int _strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index = index + 1;
	}
	return (index);
}

/**
* string_nconcat - concatenates two strings
* @s1: string one
* @s2: string two
* @n: n length
*
* Return: pointer to the newly allocated space in memory which contains
* s1, followed by the first n bytes of s2 and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_index;
	unsigned int s2_index;
	unsigned int s1_length;
	unsigned int s2_length;

	s1_index = 0;
	s2_index = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	if (n > s2_length)
	{
		n = s2_length;
	}
	ptr = malloc(sizeof(*ptr) * (s1_length + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[s1_index] != '\0')
	{
		ptr[s1_index] = s1[s1_index];
		s1_index = s1_index + 1;
	}
	while (s2[s2_index] != '\0' && s2_index < n)
	{
		ptr[s1_index] = s2[s2_index];
		s2_index = s2_index + 1;
		s1_index = s1_index + 1;
	}
	ptr[s1_index] = '\0';
	return (ptr);
}
