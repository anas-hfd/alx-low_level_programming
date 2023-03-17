#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = abs(n % 10);

	printf("Last digit of %d is %d", n, lastdigit);
	if (lastdigit > 5)
		{
		printf(" and is greater than 5\n");
		}
	else if (lastdigit == 0)
		{
		printf(" and is 0\n");
		}
	else if (lastdigit < 6, lastdigit != 0)
		{
		printf(" and is less than 6 and not 0\n");
		}
	return (0);
}
