#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 */





void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
