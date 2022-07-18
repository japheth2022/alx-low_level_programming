#include "main.h"
/**
 * _strchr - character search function
 * @s: string
 * @c: character
 * Return: a string
 */







char *_strchr(char *s, char c)

{
	int a = 0, b;

	while (s[a])

		a++;
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
			s = 1 + b;
		return (s);
	}
	return (0);
}
