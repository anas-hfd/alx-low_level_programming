#include "search_algos.h"

/**
 * linear_search - Searches for value in an array "Linear search algorithm"
 * @array: ptr to 1st elem of the array to search in
 * @size: the size of the array
 * @value: the value to look for
 * Return: value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	/*if the value is not found in the array*/
	return (-1);
}
