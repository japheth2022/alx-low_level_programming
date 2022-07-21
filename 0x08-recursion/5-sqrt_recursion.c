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
 * _sqrt -> recursive square root function
 * @n: integer
 * @i: iterator
 * Return: number
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

