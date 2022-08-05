#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers with a string after it
 * @separator: string
 * @n: number of int passed to d function
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	int i;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(va);
}
