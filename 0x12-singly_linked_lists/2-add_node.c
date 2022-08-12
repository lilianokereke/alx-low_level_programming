#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *strd;

	strd = strdup(str);

	new = malloc(sizeof(list_t));
	if (head != NULL)
	{
		new->next =  (*head)->next;
		(*head)->next = NULL;
	return (new);
	}
	else
		return (NULL);
}
