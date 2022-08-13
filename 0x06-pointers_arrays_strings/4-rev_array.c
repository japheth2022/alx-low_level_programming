#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses elements of array
 * @a: an array
 * @n : an element of an array
 */


void reverse_array(int *a, int n)
{

	int i, end, tmp;



	i = 0;

	end = n - 1;


	for (i = 0; i < n; i++)

	;

	for (i = 0; i < n / 2; i++)

	{

	tmp = a[i];

	a[i] = a[end];

	a[end] = tmp;

	end--;

	}



	for (i = 0; i < n; i++)

	;
}
