#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a list of ints
 * @head: ptr to head
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	const listint_t *node;

	if (head == NULL)
	{
		exit(98);
	}
	node = head;
	for (n = 0; node != NULL; n++)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		if (node > node->next)
		{
			node = node->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)node->next, node->next->n);
			break;
		}
	}
	return (n);
}
