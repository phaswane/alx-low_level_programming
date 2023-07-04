#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL
 * @head: pointer to a pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current2;
	listint_t *next;

	if (head == NULL)
		return;

	current2 = *head;

	while (current2 != NULL)
	{
		next = current2->next;
		free(current2);

		current2 = next;
	}

	*head = NULL;
}
