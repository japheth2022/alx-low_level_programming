#include "main.h"
/**
 *  _memset - memory set function
 *  @s:a string
 *  @b: a character
 *  @n: integer
 *  Return: string
 */





char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);


}
