#include "lists.h"
/**
 * list_len - get the number of elements in a linked list
 * @h: the linked list
 * Return: the number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t num;

	while (h)
	{
		h = h->next;
		num++;

	}
	return (num);
}
