#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: ptr to 1st elem of the array to search in
 * @size: the size of the array
 * @value: the value to look for
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = %d\n", i, array[i]);
        if (array[i] == value)
        {
            printf("Found %d at index: %lu\n", value, i);
            return (i);
        }
    }
    /*if the value is not found in the array*/
    return (-1);
}