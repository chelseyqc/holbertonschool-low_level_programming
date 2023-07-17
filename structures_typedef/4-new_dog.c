#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strdup - duplicate the string in the new memory
* @str: the given string
*
* Return: NULL if str is NULL or a point to the duplicated string
*/
char *_strdup(char *str)
{
	int src_index;
	int dest_index;
	char *copy;

	src_index = 0;
	dest_index = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[src_index] != '\0')
	{
		src_index = src_index + 1;
	}
	copy = (char *)malloc(sizeof(char) * (src_index + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	while (dest_index < src_index)
	{
		copy[dest_index] = str[dest_index];
		dest_index = dest_index + 1;
	}
	copy[dest_index] = '\0';
	return (copy);
}

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: description of dog, otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *namecopy;
	char *ownercopy;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	namecopy = _strdup(name);
	if (name == NULL && name != NULL)
	{
		free(namecopy);
		free(ptr);
		return (NULL);
	}
	ownercopy = _strdup(owner);
	if (ownercopy == NULL && owner != NULL)
	{
		free(ownercopy);
		free(namecopy);
		free(ptr);
		return (NULL);
	}
	ptr->name = namecopy;
	ptr->age = age;
	ptr->owner = ownercopy;
	return (ptr);
}
