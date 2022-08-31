#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld*= -1;
	}

	_putchar(ld + '0');
	_putchar('\n');
	return (ld);
}

/**
 *
 *
 */
void jack_bauer(void)
{
	double start = 0;
	double end = 23;
	int len = start;

	for (; start < end; start++)
	{
		len = _putchar(start);
		_putchar(':');
	}
	_putchar(len);

}
int main ()
{
	int x = 123;
	int nm = print_last_digit(x);
	jack_bauer();
	return (0);
}
