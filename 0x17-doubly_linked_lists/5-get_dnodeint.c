#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: Pointer to the head
 * @index: node index
 *
 * Return: The direction of the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int _counter = 0;

	while (_counter < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		_counter++;
	}
	return (head);
}
