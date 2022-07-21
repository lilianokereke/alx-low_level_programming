#include "main.h"
/**
 * sqr - che
 *
 *
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
 *
 *
 *
 */
 int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}
