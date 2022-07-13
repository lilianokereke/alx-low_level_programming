#include "main.h"
#include <stdio.h>
/**
 * print_array - to print an array
 * @a: 1st parameter
 * @n: 2nd parameter
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d, \n", a[i]);

		if (i == n - 1)
			continue;

	printf(", \n");
	}
}
