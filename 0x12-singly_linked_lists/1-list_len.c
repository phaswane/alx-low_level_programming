#include "lists.h"

/**
 * list_len - return number of elements of the linked lists
 *
 * @h: pointer to the list_t
 *
 * Return: lenth
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *current = h;

	if (h == NULL)
		return (-1);

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}

	return (elements);
}
