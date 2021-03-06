#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * @src: the string to append
 * @dest : the one to join to
 * @n: the number of bytes to be joined from src.
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dlen = 0;

	while (dest[i++])
		dlen++;

	for (i = 0; src[i] && i < n; i++)
		dest[dlen++] = src[i];

			return (dest);
}
