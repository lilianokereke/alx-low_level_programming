#include "main.h"
/**
 *
 *
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = ptr;
	*b = *a;
	*a = *b;
}

