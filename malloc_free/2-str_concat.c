#include <stdlib.h>
#include "main.h"

/**
* _strlen - checks the length of a string
* @s: the string
* Return: length of the string
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

/**
* str_concat - concatenates two strings
* @s1: string one
* @s2: string two
*
* Return: concatenated s1 and s2, otherwise NULL if failure
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_index;
	int s2_index;

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
	concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[s1_index] != '\0')
	{
		concat[s1_index] = s1[s1_index];
		s1_index = s1_index + 1;
	}
	while (s2[s2_index] != '\0')
	{
		concat[s1_index] = s2[s2_index];
		s1_index = s1_index + 1;
		s2_index = s2_index + 1;
	}
	concat[s1_index] = '\0';
	return (concat);
}
