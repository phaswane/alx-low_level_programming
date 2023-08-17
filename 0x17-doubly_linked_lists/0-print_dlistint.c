#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to node structure
 * Return: amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
