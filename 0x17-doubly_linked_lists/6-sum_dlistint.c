#include "lists.h"

/**
 * sum_dlistint -> Returns the sum of all the n a dlistint_t linked list:)
 * @head: Head List
 * Return: Sum:)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
