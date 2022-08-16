#include "lists.h"

/**
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *deln;
	int numb;

	if (head == NULL)
		return 0;
	else
	{
		deln = *head;
		numb = (*head)->n;
		*head = (*head)->next;
		free(deln);
	}
		return (numb);
}
