#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - the summ of data
 * @head: ptr to head
 * Return: the sum of data
 */

int sum_listint(listint_t *head)
{
	int n, i, s = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; head != NULL; i++)
		{
			n = head->n;
			s = s + n;
			head = head->next;
		}
	}
	return (s);
}
