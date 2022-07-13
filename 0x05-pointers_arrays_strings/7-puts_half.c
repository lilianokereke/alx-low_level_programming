#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, half = 0, n;

	while (str[half]++)
	len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;


	for (half = 0; half < len ; half++)
	_putchar(str[half]);
	_putchar('\n');
}
