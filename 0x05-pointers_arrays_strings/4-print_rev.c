#include "main.h"
/**
 * print_rev - function to print reverse of s
 * @s: argument for the function
 */
void print_rev(char *s)
{
	while (*s)

		_putchar(*s--);
	_putchar('\n');
}
