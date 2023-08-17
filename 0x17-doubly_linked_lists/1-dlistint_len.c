#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to struct
 * Return: number of elements 
 */
size_t dlistint_len(const dlistint_t *h)
{
	int _count = 0;

	while (h != NULL)
	{
		h = h->next;
		_count++;
	}
	return (_count);
}
