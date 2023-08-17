#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: Pointer to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *memory;

	while (head != NULL)
	{
		memory = head->next;
		free(head);
		head = memory;
	}
}
