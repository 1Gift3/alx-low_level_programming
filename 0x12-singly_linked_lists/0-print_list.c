#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to list_t of list to print
 *
 * Return: The number of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
