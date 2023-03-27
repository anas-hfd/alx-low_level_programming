#include "main.h"
/**
 * rev_string - reversing a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int ind = 0;
	char c;

	while (s[ind++])
	{
	len++;
	}
	for (ind = len - 1; ind >= len / 2; ind--)
	{
		c = s[ind];
		s[ind] = s[len - ind - 1];
		s[len - ind - 1] = c;
	}
}
