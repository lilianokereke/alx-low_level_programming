#include "main.h"
/**
 * _strcmp - compares 2 string
 * @s1: first string
 * @s2: 2nd string
 * Return: returns a value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] == '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (*s1 - *s2);
}
