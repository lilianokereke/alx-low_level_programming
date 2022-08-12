#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node to the beginning of a singly list
 * @head: a pointer to the beginning of our list
 * @str: a string
 * Return: the address of our new node
 * Return: null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *strd;

	strd = strdup(str);

	*new = malloc(sizeof(list_t));
	if (head != NULL)
	{
		new->str = strd;
		new->next = NULL;
		new->next = (*head)->next;
		(*head)->next = NULL;
	return (new);
	}
	else
		return (NULL);
}
