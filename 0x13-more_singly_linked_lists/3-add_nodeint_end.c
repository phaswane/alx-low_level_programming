#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at end of listint_t lis
 * @head: pointer to the first element in the listint_t
 * @n: data to the new element
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *new;

	if (!head)
	{
		return (0);
	}

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = 0;

	new = *head;
	if (!new)
	{
		*head = node;
		return (node);
	}

	while (new->next)
	{
		new = new->next;
	}
	new->next = node;
	return (node);
}
