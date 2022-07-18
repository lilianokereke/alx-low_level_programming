#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filed
 * @b:byte to be filled with
 * @n: numberof spaces to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
