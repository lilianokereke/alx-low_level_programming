#include "lists.h"
/**
 * free_listint2 - frees list and set head to NULL
 * @head: the beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *fre;

	while (head != NULL)
	{
		fre = (*head)->next;
		free(head);
		*head = fre;

	}
	head = NULL;
}
