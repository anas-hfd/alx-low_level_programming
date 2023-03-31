#include "main.h"
/**
 * print_number - print number
 * @n: int input
 * Return: void
 */

void print_number(int n)
{
	/*handle negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/*recrusive case*/
	if (n / 10)
	{
		print_number(n / 10);
	}
	/*print last digit*/
	_putchar((n % 10) + '0');
}
