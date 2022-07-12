#include "main.h"
/**
 * swap_int - function to swap integers
 * @a: first argument
 * @b: second argument
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}

