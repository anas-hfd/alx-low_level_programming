#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: pointer to the string
 *@accept: pointer to the string
 *
 *Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*c == *p)
			{
				return (p);
			}
			c++;
		}
		p++;
	}
	return (NULL);
}
