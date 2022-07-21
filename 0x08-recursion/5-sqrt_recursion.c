#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - is a function that finds the square root of numbers
 * @n: integer parameter
 * Return: square root
 */








int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * -sqrt - recursive square root
 * @n: integer
 * @i: iterator
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square == n)
		return (i);
	if (square > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

