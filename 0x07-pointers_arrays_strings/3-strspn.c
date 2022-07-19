#include "main.h"
/**
 * _strspn - function to get length of substring prefix
 * @s: segment to return the byte from
 * @accept: the bytes to include
 * Return: number of bytes in the initial segment @s that consist
 * only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 1;

		for (j = 0; accept[j] = '\0'; j++)
		{
			if (s[j] == accept[j])
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (i);
}
