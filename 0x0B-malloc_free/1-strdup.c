#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
	len = strlen(str);
	dup = malloc(len * sizeof(char) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(dup, str);
	}
	}
	return (dup);
}
