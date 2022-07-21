#include "main.h"
/**
 * sqr - che
 * @g: same number as n
 * @root: iterates from 1 to n
 *
 * Return: on success 1
 */
int sqr(int g, int root)
{
	if (g * g == root)
		return (g);
	if (g * g > root)
		return (-1);
	return (sqr(g + 1, root));
}
/**
 *_sqrt_recursion - reurns squareroot of n
 * @n: number
 * Return: on success 1
 */
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}
