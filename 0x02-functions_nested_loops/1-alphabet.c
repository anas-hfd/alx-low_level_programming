#include <stdio.h>
/**
 * main - Entry point
 *
 * print_alphabet - Declaration of a new function
 *
 * Return: void
 */
int main(void)
{
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return;
}
}
