#include "main.h"
/**
 * _puts - func to print
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
