#include "main.h"
#include <string.h>


/**
 * _strchr - character search function
 * @s: string
 * @c: character
 * Return: a string
 */







char *_strchr(char *s, char c)
{
	int a = 0, b;

	for (b = 0 ; b <= a; b++)
	{
		if (c == s[b])
		s += b;
		return (s);
	}
	return ('\0');
}
