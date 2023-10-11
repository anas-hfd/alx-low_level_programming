#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array "Binary search algorithm"
 * @array: ptr to the 1st elem in the array to search in
 * @size: the size of the array
 * @value: what we are looking for
 * Return: index where the value is found
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, middle, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (start <= end)
	{
		middle = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] > value)
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}
	}
	return (-1);
}
