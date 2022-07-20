#include "main.h"
/**
 * _strlen_recursion - print length of a string
 * @s: string to check to get the length
 * Return: return zero
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
