#include "main.h"
/**
 * _strncat - function to append characters
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: string
 */







char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
