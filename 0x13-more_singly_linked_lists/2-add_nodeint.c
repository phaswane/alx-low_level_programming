#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of listint_t
 * @head: pointer to the first node in the listnt_t
 * @n: data to new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
