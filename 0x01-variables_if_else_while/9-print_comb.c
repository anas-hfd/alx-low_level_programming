#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
