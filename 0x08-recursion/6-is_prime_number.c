#include "main.h"

/**
 * prime_check - helper checking if the numbers are prime
 * @a: int
 * @b: int
 * Return: int
 */

int prime_check(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(a + 1, b));
	}
}
/**
 * is_prime_number - return the result of being prime or not
 * @n: number
 * Return: prime 1 not prime 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(2, n));
	}
}
