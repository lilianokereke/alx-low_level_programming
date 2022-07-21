#include "main.h"
/**
 * _pow_recursion - multiply x raised to power * of the number of y
 * @x: base number
 * @y: raised to power of this number
 * Return: return the answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
		return (x * (_pow_recursion(x, y - 1)));
}
