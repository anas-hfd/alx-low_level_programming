#include "main.h"
/**
 * swap_int - swap values
 * @a: nuber1
 * @b: number2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
