#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a char in a string
 * @s: char
 * @c: char
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (NULL);
}
