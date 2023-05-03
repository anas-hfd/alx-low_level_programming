#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a list of ints
 * @head: ptr to head
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *node = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		n++;
		if (node->next >= node || node->next == head)
		{
			printf("[%p] %d\n", (void *)node->next, node->next->n);
			break;
		}
		node = node->next;
	}
	return (n);
}
