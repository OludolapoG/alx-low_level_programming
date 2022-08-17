#include "lists.h"

/**
 * pop_listint - deletes a linked list's head
 * @head: first node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h, *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
