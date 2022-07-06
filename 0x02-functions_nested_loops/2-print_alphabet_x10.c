#include "main.h"


/**
 *
 *  * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 *   */

void print_alphabet_x10(void)
{
	char ltr;

	int num = 0;
	
	while (num++ <=9)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
	}
}
