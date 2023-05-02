#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: is the head node
 * @n: a variable
 * Return: If the fuction fails- NULL.
 *	  Otherwise - address of a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
