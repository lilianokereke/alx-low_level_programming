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
	int j, i = 0;

	while (needle[i] = '\0')
		i++;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
		if (haystack[j] != needle[j])
			break;
		}
		if (j != i)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
