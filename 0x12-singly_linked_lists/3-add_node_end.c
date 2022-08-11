#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: first node
 * @str: string to be stored in the list
 * Return:address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t chars;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (chars = 0; str[chars]; chars++)
		;

	new->len = chars;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
