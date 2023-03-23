#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: the character to be checked
 * Return: if upper 1 if lower 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
