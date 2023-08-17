#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: Pointer to the head
 * Return: result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int _result = 0;

	while (head != NULL)
	{
		_result += head->n;
		head = head->next;
	}
	return (_result);
}
