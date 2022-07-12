#include "main.h"
/**
 * print_rev - function to print reverse of s
 * @s: argument for the function
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i  >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
