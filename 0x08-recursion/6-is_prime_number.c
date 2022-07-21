#include "main.h"
/**
 * check_prime - checks if a number is
 * prime number
 * @a:same number as n
 * @b:number iterates from 1 to n
 * Return: returns 1 if prime else 0
 */
int check_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
	{
		return (0);
	}
	return (check_prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is * prime number
 * @n: Number
 * Return: returns 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (check_prime(n, 2));
}
