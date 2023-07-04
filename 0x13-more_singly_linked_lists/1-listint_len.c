#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
