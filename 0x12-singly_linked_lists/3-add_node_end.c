#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 *
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
	else
	{
		new->str = strdup(str);
		for (lent = 0; str[lent]; lent++);
			new->len = lent;
		new->next = end;
		end = new;
		return (new);
	}

}
