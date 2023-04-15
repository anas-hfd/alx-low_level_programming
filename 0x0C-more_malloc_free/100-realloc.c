#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a piece of memory
 * @ptr: pointer
 * @old_size: the first size to copy
 * @new_size: the size after copying
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *xp;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (ptr2);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 != NULL)
	{
		xp = ptr;
		for (i = 0; i < old_size; i++)
		{
			ptr2[i] = xp[i];
		}
		free(ptr);
	}
	return (ptr2);
}
