#include "main.h"
#include <stddef.h>
/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
