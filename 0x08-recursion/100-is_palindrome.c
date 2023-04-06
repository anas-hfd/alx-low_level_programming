#include "main.h"

/**
 * _strlen - determine the length of the str
 * @s: string
 * Return: the streln
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * _palin_check - helper to check if a str is palindrome
 * @s: string
 * @l: left index
 * @r: right index
 * Return: palinrome 1, if not 0
 */

int _palin_check(char *s, int l, int r)
{
	if (s[l] == s[r])
	{
		if (l > r / 2)
		{
			return (1);
		}
		else
		{
			return (_palin_check(s, l + 1, r - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome -returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: palindrome 1, 0 if not
 */

int is_palindrome(char *s)
{
	return (_palin_check(s, 0, _strlen(s) - 1));
}
