#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - reverses a listint list
 * @first: a node to reverse
 * @second: a node after node to reverse
 * Return: void
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *new = first;
	listint_t *prev = NULL;

	while (new->next != second)
	{
		prev = new;
		new = new->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = new->next;
	if (first != new && second != first)
		second = reverse_recur(second, first);
	new->next = second;
	return (new);
}

/**
 * reverse_listint - reverses a list
 * @head: a list to reverse
 * Return: a new head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	*head = reverse_recur(*head, NULL);

	return (*head);
}
