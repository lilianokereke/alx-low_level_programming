#include "main.h"
/**
 * rev_string - to reverse a string
 * @s: the parameter of our function, (reverse)
 *
 */
void rev_string(char *s)
{
	int len = 0, count = 0;
	char var;

	while (s[count++])
		len++;
	for (count = len - 1; count >= len / 2; count--)
	{
		var = s[count];
		s[count] = s[len - count - 1];
		var = s[len - count - 1];
	}
}
