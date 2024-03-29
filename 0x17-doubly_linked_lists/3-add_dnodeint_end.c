#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head pointer of the list
 * @n: value of new node
 * Return: address of new node or null if its fails
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;


	dlistint_t *move
		;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	move = *head;
	while (move->next != NULL)
	{
		move = move->next;
	}
		move->next = new;
		new->prev = move;
	return (new);
}
