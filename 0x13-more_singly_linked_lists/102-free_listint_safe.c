#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the first node.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_elements = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num_elements++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num_elements++;
			break;
		}
	}

	*h = NULL;

	return (num_elements);
}

