#include "main.h"
/**
 * _strlen - function for length of string
 * @s: parameter of function
 * Return: returns the variable
 */
int _strlen(char *s)
{
	int nun = 0;

	while (*s++)
		nun++;
	return (nun);
}
