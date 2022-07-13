#include "main.h"
/*
 * puts2 - out of two strings prints one  character
 * @str: it contains the characters in the string
 */
void puts2(char *str)
{
	int count = 0;
	int len = 0;

	while (str[count++])
		len++;

	for (count = 0; count < len; count += 2)
			_putchar(str[count]);

	_putchar('\n');
}
