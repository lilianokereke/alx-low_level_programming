#include "main.h"
/**
 * print_rev - function to print reverse of s
 * @s: argument for the function
 */
void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	for (len--; len >= 0; len--)

		_putchar(s[len]);
		_putchar('\n');
}