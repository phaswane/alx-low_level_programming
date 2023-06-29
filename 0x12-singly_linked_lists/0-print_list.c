#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer to list_t 
 *
 * Return: struct size_t
 */

size_t print_list(const list_t *h)
{
	if (str == NULL)
		printf("[0] (nil)");

	printf("%s", h->str);
	printf("%d", h->len);
	printf("%p", h->next);

	return (0);
}
