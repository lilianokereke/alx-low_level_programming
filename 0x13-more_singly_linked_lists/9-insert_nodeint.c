#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a certain position
 * @head: the beginning of the list
 * @idx: the position of the node we are inserting
 * @n: the data of the node
 * Return: on success return the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert;
	listint_t *temp = *head;

	unsigned int len;

	insert = malloc(sizeof(listint_t));
	insert->next = NULL;
	if (insert == NULL)
		return (NULL);
	insert->n = n;

	if (idx == 0)
	{
		insert->next = temp;
		*head = insert;
		return (insert);
	}
	else
	{
		for (len = 0; len < (idx - 1); len++)
		{
			if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	insert->next = temp->next;
	temp->next = insert;
	}
	return (insert);
}
