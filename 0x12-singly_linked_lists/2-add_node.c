#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: first node of linked list
 * @str: string to be stored in list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t chars;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (chars = 0; str[chars]; chars++)
		;

	new->len = chars;
	new->next = *head;
	*head = new;

	return (*head);
}
