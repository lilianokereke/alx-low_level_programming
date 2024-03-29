#include "lists.h"
#include <stdio.h>
/**
 * print_list - print a singly linked list
 * @h: singly linked list
 * Return: number ofelements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;

	}
	return (n);
}
