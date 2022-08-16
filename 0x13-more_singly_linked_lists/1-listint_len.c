#include "lists.h"
/**
 * listint_len - prints the list length
 * @h: the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{

		h = h->next;
		num++;
	}
	return (num);
}
