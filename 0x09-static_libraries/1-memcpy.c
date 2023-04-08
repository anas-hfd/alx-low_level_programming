#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: unsigned int
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (p);
}
