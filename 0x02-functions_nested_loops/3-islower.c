#include "main.h"
/**
 *_islower - lowercase function
 *@c: charachter
 * Return: 1 for lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
