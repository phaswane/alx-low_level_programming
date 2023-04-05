#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  it deletes node at index index of a listint_t
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *ptr = *head;
	listint_t *new = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (j < index - 1)
	{
		if (!ptr || !(ptr->next))
		{
			return (-1);
		}
		ptr = ptr->next;
		j++;
	}

	new = ptr->next;
	ptr->next = new->next;
	free(new);

	return (1);
}
