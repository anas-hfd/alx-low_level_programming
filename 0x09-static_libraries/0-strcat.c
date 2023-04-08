#include "main.h"
#include <string.h>
/**
 *_strcat - Concatenates strings
 *@src: the source
 *@dest: the destination
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
