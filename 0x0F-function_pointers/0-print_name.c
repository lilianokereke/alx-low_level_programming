#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print d name
 * @name: the string to be printed
 * @f: funtion pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
