#include "main.h"
/**
 * print_sign - prints signs depending on conditions
 * @n: passed argument
 * Return: returns 1 0 and -1 depending on conditions
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
