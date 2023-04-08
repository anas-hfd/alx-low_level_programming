#include "main.h"
/**
 * _memset - sets a constant in memory
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
