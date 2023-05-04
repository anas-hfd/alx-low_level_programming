#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to int
 * @b: char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char c;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c != '0' && c != '1')
		{
			return (0);
		}
		result = (result << 1) + (c - '0');
	}
	return (result);
}
