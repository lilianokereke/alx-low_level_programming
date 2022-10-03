#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to find a character in a string
 * @s: string , which we look for oour character
 * @c: character we are looking for
 * Return: return null if string was not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
