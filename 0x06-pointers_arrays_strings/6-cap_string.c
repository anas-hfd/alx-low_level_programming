#include "main.h"
/**
 * cap_string - capitalize everything
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
	str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}')
	{
	capitalize_next = 1;
	}
	else if (capitalize_next)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		capitalize_next = 0;
	}
	i++;
	}
	return (str);
}
