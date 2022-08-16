#include "lists.h"

/**
 * pop_listint - remove the head node
 * @head: the start of the list
 * Return: returns the data of the head node @n
 */
int pop_listint(listint_t **head)
{
	listint_t *deln;
	int numb;

	if ((*head == NULL))
	{
		return (0);
	}
	else
	{

		numb = (*head)->n;
		deln = (*head)->next;
		free(head);
		(*head) = deln;

		return (numb);
	}
}
