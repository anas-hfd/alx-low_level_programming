#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substing
 * @haystack: string
 * @needle: string
 * Return: ptr to the beggining of substrng
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
