#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *conc;

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
	conc = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);
	if (conc == NULL)
	{
		return (NULL);
	}
	strcpy(conc, s1);
	strcat(conc, s2);
	return (conc);
}
