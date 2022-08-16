#include "lists.h"
/**
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;
	while (h != NULL)
	{
		len++;
		printf("%d", h->n);
		h = h->next;
	}
	return(len);
}
