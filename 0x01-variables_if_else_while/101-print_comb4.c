#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				int total = a * 100 + b * 10 + c;

				if (total % 111 != 0)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8  || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
