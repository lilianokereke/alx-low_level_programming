#include "main.h"
/**
 * _strcat - concatenate a string
 * @dest: destination
 * @src: source of string to be appended to dest
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
	for (b = 0; src[b]  != '\0'; b++)
		dest[a] = src[b];
	}
	return (dest);
}
