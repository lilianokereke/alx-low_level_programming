#include "lists.h"
/**
 * print_listint - print the integers of the singly list
 * @h: the singly list
 * Return: the list length
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
