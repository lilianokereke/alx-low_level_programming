#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a node at the end of a list
 * @head: the stringly list
 * @str: string in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *end;

	size_t lent;

	end == NULL;
	


	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
		new->str = strdup(str);
		for (lent = 0; str[lent]; lent++);
			new->len = lent;
		new->next = end;
		end = *head;

		if (end == NULL)
		{
			*head = new;
		}
		else
		{
			while (end->next != NULL)
			{
				end = end->next;
			}
			end->next = new;
		}
		return (*head);
}
