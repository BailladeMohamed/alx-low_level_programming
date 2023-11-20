#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: first element
 *
 * Return: data of deleted element, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (head_data);
}

