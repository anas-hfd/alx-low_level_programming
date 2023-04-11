#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of char
 * @size: the size of the array
 * @c: character
 * Return: char
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	}
	return (array);
}
