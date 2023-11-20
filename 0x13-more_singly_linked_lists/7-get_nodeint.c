#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_variable = 0;
	listint_t *temp = head;

	while (temp && index_variable < index)
	{
		temp = temp->next;
		index_variable++;
	}

	return (temp ? temp : NULL);
}

