#include "lists.h"
/**
 * free_listint - free a list
 * @head: the start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
