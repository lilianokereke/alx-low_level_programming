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
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{

		for (j = 0; accept[j] = '\0'; j++)
		{
			if (s[j] == accept[j])
				c++;
		}
	}
	else
		return (c);
	}
	return (c);
}
