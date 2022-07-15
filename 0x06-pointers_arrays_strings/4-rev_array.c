#include "main.h"
/**
 * reverse_array - reverse array
 * @a: contains our elements
 * @n: length of array
 */
void reverse_array(int *a, int n)
{	int i, var;
	for (i = 0; i < n / 2; i++)
{
	var = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = var;
}
}
