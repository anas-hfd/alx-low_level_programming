#include "main.h"
/**
 * _isalpha - alphabet chacker
 * @c: character
 * Return: 1 if c is alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
