#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
