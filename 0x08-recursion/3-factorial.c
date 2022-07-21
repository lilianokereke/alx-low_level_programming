#include "main.h"
/**
 * factorial - get the factorial of a nuumber
 * @n: number to get the factorial of
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
