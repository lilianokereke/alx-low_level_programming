#include "main.h"
/**
 * _puts_recursion - function 2 print string, then by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar ('\n');
}
