#include "main.h"
#include <stdio.h>
/**
 * print_array - to print an array
 * @a: 1st parameter
 * @n: 2nd parameter
 */
void print_array(int *a, int n)
{
	*a = a[n];

	printf("%d, \n", n);

}
