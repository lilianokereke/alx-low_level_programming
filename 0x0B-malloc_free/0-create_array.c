#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
		c = malloc(size * sizeof(char));
			_putchar(c);
			return (0);
}
