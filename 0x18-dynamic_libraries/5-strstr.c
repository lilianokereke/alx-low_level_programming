#include "main.h"
#include <stddef.h>
/**
 * _strstr - function to locate a substring
 * @haystack: where we are locating out substring
 * @needle: the string we are looking for
 * Return: return null if string not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *j;
	char *i;

	while (*haystack != '\0')
	{
		j = haystack;
		i = needle;
		while (*haystack != '\0' && *i != '\0' && *haystack == *i)
		{
			haystack++;
			i++;
		}
		if (!*i)

			return (j);
		haystack = j + 1;
	}
	return (0);
}
