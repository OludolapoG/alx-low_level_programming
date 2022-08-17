#include "lists.h"

/**
 * sum_listint - sums all a linked list's data
 * @head: first node
 * Return: sum (n)
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
