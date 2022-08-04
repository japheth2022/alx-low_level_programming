
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer 1 parameter
 * @f: pointer 2 parameter
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
