#include "main.h"
/**
 * _isdigit - 0-9 digits checker
 * @c: the number to be checked
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
