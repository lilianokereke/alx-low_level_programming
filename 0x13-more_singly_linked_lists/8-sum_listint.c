#include "lists.h"
/**
 * sum_listint - add the numbers in the ist
 * @head: the start of the list
 * Return: the total/ sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
}
