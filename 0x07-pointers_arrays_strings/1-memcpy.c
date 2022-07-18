#include "main.h"
/**
 * _memcpy - memory coping function
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */






char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
