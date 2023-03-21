#include "main.h"
/**
 * print_last_digit - last digit
 * @n: number
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
