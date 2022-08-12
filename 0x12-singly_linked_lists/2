#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node to the beginning of a singly list
 * @head: a pointer to the beginning of our list
 * @str: a string
 * Return: the address of our new node
g* return: null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *strd;
	size_t len;

	strd = strdup(str);

	new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		for (len = 0; str[len]; len++)
			;
		new->str = strd;
		new->next = *head; /*new pointer takes the place of the head*/
		*head = new; /*takes the place of new pointer*/
	return (new);
	}
	else
	{
		return (NULL);
	}
}
