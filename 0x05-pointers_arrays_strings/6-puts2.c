#include "main.h"
/**
 * puts2 - out of two strings prints one  character
 * @str: it contains the characters in the string
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

		for (i = 0; i < len; i += 2)
			_putchar(str[i]);

					_putchar('\n');
}
