#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - it inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index to new node is added
 * @n: data to insert in new node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *node;
	listint_t *ptr = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (j = 0; ptr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		else
		{
			ptr = ptr->next;
		}
	}

	return (NULL);
}
