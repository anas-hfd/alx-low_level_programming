#include "main.h"
/**
 * print_sign - neg pos 0 checker
 * @n: number
 * Return: 1 if n pos, 0 if 0, -1 if n neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
