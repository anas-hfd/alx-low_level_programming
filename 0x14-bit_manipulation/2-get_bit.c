#include "main.h"

/**
* get_bit - gets the bit value at an index
* @n: num
* @index: the index
* Return: the value of the the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
