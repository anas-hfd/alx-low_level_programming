#include "main.h"

/**
* clear_bit - sets the valu 0 at a given index
* @n: a ptr to num
* @index: index
* Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
	mask = 1UL << index;
	*n &= ~mask;
	}
	return (1);
}
