#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all arguments, variadic
 * @n: first argument
 * Return: rturn the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(va, n);
		for (; i < n; i++)
			sum += va_arg(va, int);
	va_end(va);
	return (sum);
}
