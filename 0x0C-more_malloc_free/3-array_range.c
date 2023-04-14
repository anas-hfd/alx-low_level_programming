#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of int
 * @min: minimum range
 * @max: maximum range
 * Return: int
 */

int *array_range(int min, int max)
{
	int size, i, *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
