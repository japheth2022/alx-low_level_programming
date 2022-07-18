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
	char *pch;

	pch = strchr(s, 'c');
	while (pch != NULL)
	{
	return (pch);
	pch = strchr(pch + 1, 's');
	}
	return (0);

}

