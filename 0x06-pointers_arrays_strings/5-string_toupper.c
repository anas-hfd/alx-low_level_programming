#include "main.h"
/**
 * string_toupper - Convert all lowercase characters in a string to uppercase.
 *
 * @str: The string to convert.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
			p++;
		}
		else
		{
			p++;
		}

	}
	return (str);
}
