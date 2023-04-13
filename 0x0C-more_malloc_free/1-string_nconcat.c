#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *allo;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	allo = malloc(len1 + n + 1);
	if (allo == NULL)
	{
		return (NULL);
	}
	memcpy(allo, s1, len1);
	memcpy(allo + len1, s2, n);
	allo[len1 + n] = '\0';
	return (allo);
}
