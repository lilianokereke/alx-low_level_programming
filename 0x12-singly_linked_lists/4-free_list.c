#include "lists.h"
#include "stdlib.h"
/**
 * free_list - free the stringly linked list
 * @head: the stringly list
 */
void free_list(list_t *head)
{
	free(head);
}
