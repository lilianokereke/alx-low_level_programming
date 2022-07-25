#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer & allocate mem  for duplicate string
 * @str: real string
 * Return: the new string pointer
 */
char *_strdup(char *str)
{
	char *dstr;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
		dstr = (char *)malloc(sizeof(char) * (a + 1));
	if (dstr == NULL)
		return (NULL);
	for (b = 0; b <= a; b++)
		dstr[b] = str[a];
	return (dstr);
}
