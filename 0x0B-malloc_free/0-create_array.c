#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to assign malloc to the variable c
 * @size: number of byte to be assigned to c
 * @c: the character c (storage)
 * Return: return a pointer at success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(c));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
