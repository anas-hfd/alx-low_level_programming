#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper counts the number of words
 * @str: string
 * Return: number of words
 */
int count_words(char *str)
{
	int word, char_index, count;

	word = 0;
	count = 0;

	for (char_index = 0; str[char_index] != '\0'; char_index++)
	{
		if (str[char_index] == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: ptr to arr(Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, index = 0, str_len = 0, num_words, char_count = 0;
	int word_start, word_end;

	while (*(str + str_len))
		str_len++;
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (num_words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				word_end = i;
				tmp = (char *) malloc(sizeof(char) * (char_count + 1));
				if (tmp == NULL)
					return (NULL);
				while (word_start < word_end)
					*tmp++ = str[word_start++];
				*tmp = '\0';
				matrix[index] = tmp - char_count;
				index++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			word_start = i;
	}
	matrix[index] = NULL;
	return (matrix);
}

