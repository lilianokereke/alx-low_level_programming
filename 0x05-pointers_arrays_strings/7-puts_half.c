#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, half = 0;

	while (str[half++])
	len++;

	if ((len % 2) == 0)
	{
		len = len / 2;
	}
	else
		len = (len - 1) / 2;


	for (half++; half < len ; half++)
	_putchar(str[half]);

	_putchar('\n');
}
