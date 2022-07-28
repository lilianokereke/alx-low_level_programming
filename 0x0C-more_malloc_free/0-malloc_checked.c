#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: the number of bytes to be allocated
 * Reeturn: our pointer to nthe allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void  *mal= malloc(sizeof(b));

	if (mal == NULL)
		exit(98);

	return (mal);
}
