#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: first node
 * Return: nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *temp, *current;

	if (head != NULL)
	{
		current  = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: list head
 * Return: freed list size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *ptr2head, *new, *add;
	listint_t *current;

	ptr2head = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr2head;
		ptr2head = new;

		add = ptr2head;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr2head);
				return (nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	free_listp2(&ptr2head);
	return (nodes);
}
