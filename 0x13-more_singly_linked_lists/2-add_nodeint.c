#include "lists.h"
/**
 * add_nodeint - add a node at the beginning of the list
 * @head: the start of the list
 * @n: the number of int to be allocated
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if(new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
