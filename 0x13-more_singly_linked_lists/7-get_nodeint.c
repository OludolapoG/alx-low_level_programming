#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: first node
 * @index: node index
 * Return: nth node, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
