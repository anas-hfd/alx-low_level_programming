#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates mem for an array
 * @size: size of the array
 * @nmemb: number of memory bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size * nmemb);
	return (ptr);
}
