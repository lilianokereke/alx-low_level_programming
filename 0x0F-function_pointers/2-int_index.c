#include "function_pointers.h"
/**
 * int_index - function to search for an integer
 * @array: the array to search our int from
 * @size: the size of the array
 * @cmp: te function pointer to compare values
 * Return: i if the element exist
 * Return -1 if it doesnt
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
	for (; i < size; i++)
	if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
