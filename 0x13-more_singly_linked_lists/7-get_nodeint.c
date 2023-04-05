#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a certain index in a list
 * @head: pointer to the first node
 * @index: index of the node to be returned
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		if (index == j)
		{
			return (head);
		}
		j++;
		head = head->next;
	}
	return (0);
}
