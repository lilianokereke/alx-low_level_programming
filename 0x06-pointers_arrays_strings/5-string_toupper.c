#include "main.h"
/**
 * string_toupper - converts string to upper
 * @s: the string
 * Return: it returns our string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')

		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	i++;
	return (s);
}
