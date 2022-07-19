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
	int i = 0;
	while (needle[i] = '\0')
	{
		for (
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
