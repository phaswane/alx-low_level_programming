#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: pointer to the first element
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (i);
}
