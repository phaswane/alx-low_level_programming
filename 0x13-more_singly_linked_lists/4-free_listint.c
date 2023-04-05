#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *ptr = head;

		head = head->next;
		free(ptr);
	}
}
