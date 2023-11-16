#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Incorporates a fresh node at the start of a linked list
 * @head: A double pointer to the list_t list
 * @str: The new string to be included in the node
 * Return: The address of the newly added node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	added_node = malloc(sizeof(list_t));
	if (!added_node)
		return (NULL);

	added_node->str = strdup(str);
	added_node->len = len;
	added_node->next = (*head);
	(*head) = added_node;

	return (*head);
}

