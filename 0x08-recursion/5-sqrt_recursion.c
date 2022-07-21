#include "main.h"
/**
 * _sqrt_recursion - is a function that finds the square root of numbers
 * @n: integer parameter
 * Return: square root
 */








int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion(n));
}
