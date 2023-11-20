#include "lists.h"

/**
 * listint_len - Counts nodes in a linked list
 * @h: The list to count
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

