#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a list
 * @head: the start of the list
 * @n: integer
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;

	listint_t *move;

	end = malloc(sizeof(listint_t));
	end->n = n;
	end->next = NULL;
	if (end == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = end;
		return (NULL);
	}
	move = *head;

	while (move->next != NULL)
	{
		move = move->next;
	}
	move->next = end;
	return (end);
}
