#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory to the array
 * @min: minimum/ first value
 * @max: maximum/last value
 * Return: a pointer
 */
int *array_range(int min, int max)

{
	unsigned int i, size, *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
