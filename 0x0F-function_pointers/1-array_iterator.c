#include "function_pointers.h"

/**
 * array_iterator - executes a func
 * @array: ptr to array
 * @size: size of the array
 * @action: ptr to func to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
