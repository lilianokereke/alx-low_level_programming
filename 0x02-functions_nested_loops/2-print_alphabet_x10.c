#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets
 *
 */
void print_alphabet_x10(void)
{
	char ltr;

	int num = 0;

	while (num++ <= 9)

	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
