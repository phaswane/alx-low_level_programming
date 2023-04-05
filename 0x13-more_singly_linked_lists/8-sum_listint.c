#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - it calculates the sum of all the data in alist
 * @head: pointer first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
