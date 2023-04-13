#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a tring into separated words
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	int a, b = 0, c, i = 0, len = strlen(str), wlen = 0;
	char **words;

	for (a = 0; a < len; a++)
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
			i++;
	}
	words = (char **)malloc(sizeof(char *) * (i + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len; a++)
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			wlen = 0;
			for (c = a; c < len && str[c] != ' '; c++)
			{
				wlen++;
			}
			words[b] = (char *)malloc(sizeof(char) * (wlen + 1));
			if (words[b] == NULL)
			{
				for (a = 0; a < b; a++)
				{
					free(words[a]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[b], &str[a], wlen);
			words[b][wlen] = '\0';
			b++;
		}
	}
	words[i] = NULL;
	return (words);
}
