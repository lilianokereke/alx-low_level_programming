#include "main.h"
/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 * Return: no returnn
 */
void print_line(int n)
{

	int i, j;
for (i = 0; i < n; i++)
{

for (j = 0; j < i; j++)
	{
_putchar(' ');
	}
	_putchar(92);
	if (i < (n - 1))

	_putchar('\n');
}
_putchar('\n');
}
