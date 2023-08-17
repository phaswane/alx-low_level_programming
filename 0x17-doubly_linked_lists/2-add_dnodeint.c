#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the direction of the head
 * @n:The data integer
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_memory;

	new_memory = malloc(sizeof(dlistint_t));

	if (new_memory == NULL)
	{
		return (NULL);
	}

	new_memory->n = n;
	new_memory->prev = NULL;
	new_memory->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_memory;
	}
	*head = new_memory;

	return (new_memory);
}
