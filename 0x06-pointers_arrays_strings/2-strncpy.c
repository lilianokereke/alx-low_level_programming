#include "main.h"
/**
 * _strncpy - to copy the src string to dest
 * @dest: copies to me
 * @src: copies from me
 * @n: the number to be copied from src
 * Return: it returns the changed dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, slen = 0;

	while (dest[i++])
		slen++;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];

		for (; i < n; i++)
			dest[i] = '\0';

		return (dest);
}
