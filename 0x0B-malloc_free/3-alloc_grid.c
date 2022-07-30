#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocates 2D array
 * @width: width array
 * @height: height array
 * Return: a pointer to the allocated array
 */

int **alloc_grid(int width, int height)
{
	int i, k, l, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);

		}
	}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[l][k] = 0;
	}
	return (a);
}
