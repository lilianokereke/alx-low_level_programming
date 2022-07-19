#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function to search for string
 * @s: where we are searching for the string
 * @accept: the bytes to search for
 * Return: return null if string not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{

	for (i = 0; i[accept]; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
	}
	return (NULL);
}
