#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked listint_t list.
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int nodedata;

	listint_t *new;

	if (*head == NULL)
		return (0);

	nodedata = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (nodedata);
}
