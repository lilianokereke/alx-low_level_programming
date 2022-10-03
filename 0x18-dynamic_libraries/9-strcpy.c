#include "main.h"
/**
 * _strcpy - copying the string in arg 2 to arg 1
 * @dest: arg 1
 * @src: arg 2
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
