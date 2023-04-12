#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatinates all args to string
 * @ac: number of args
 * @av: ptr to ptr
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	int total = 0;
	char *conc;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total = total + len + 1;
	}
	conc = malloc(sizeof(char) * total);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		memcpy(conc + j, av[i], len);
		j = j + len;
		conc[j++] = '\n';
	}
	conc[j] = '\0';
	return (conc);
}
