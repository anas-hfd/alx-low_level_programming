#include "main.h"

/**
 * wildcmp - copare strings, are they identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical, if not 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}
	return (0);
}
