#include "function_pointers.h"
/**
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int n = 0;

	for (; i < size; i++)
		if (size <= 0)
			return (-1);
	if (array[n] != array[i])
		return (-1);

	cmp(array[n]);

}
