#include "lists.h"

/**
 * list_len - gets list length
 * @h: singly linked list
 * Return: nummber of list elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
