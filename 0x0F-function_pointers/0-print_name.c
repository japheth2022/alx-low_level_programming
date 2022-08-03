#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer 1 parameter
 * @f: pointer 2 parameter
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", name);
}

int main(void)
{
	char variable = "name";

	print_name(variable, &print_name);

	return (0);
}
