#include <stdio.h>
#include "main.h"

/**
 * _strlen - helps to find the length of a string
 * @str: ptr to the string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
	size_t x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}
/*helper function to find the lengthof a str*/


/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: file names
 * @text_content: text to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
	{
		return (-1);
	}
	return (1);
}
