#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to print diagolan sum(s1 means sum)
 * @a: the matrix pof integers
 * @size: the size of the mqatrix
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
			a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
