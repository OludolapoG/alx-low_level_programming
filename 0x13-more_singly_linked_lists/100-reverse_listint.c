#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: first node
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = NULL, n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
