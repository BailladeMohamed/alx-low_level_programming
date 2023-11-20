#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: The first element in the list
 * @n: The new element's data
 *
 * Return: New node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *temp = *head;

	end_node = malloc(sizeof(listint_t));
	if (!end_node)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = end_node;

	return (end_node);
}

