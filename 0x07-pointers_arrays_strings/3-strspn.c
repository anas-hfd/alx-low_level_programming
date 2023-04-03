#include "main.h"
/**
 * _strspn - gets the lenth of a prefix
 * @s: pointer to s
 * @accept: pointer to accept
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				count++;
				break;
			}
			c++;
		}
		if (*c == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
