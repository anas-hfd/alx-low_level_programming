#include "main.h"

/**
 * _abs - sets the absolute value of a number
 * @n: number
 * Return: if n is pos ret n if negative ret abs
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * (-1);
		return (abs);
	}
	return (n);
}
