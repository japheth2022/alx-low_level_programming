#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - string duplicator function
 * @str: string to be duplicated
 *Return: a string
 */
char *_strdup(char *str)

{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
	  
