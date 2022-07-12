#include "main.h"
/**
 * _puts -function to print string
 * @str: parameter for the function
 */
void _puts(char *str)
{
	char a = *str;

	while(*str++)

	_putchar(a);
	_putchar('\n');
}
