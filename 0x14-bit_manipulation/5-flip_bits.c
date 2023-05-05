#include "main.h"

/**
* flip_bits - how many flips we need to swich
* @n: numb
* @m: number
* Return: num of bits you would need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int i = 0;

	while (a)
	{
		if (a & 1)
		{
			i++;
		}
		a >>= 1;
	}
	return (i);
}
