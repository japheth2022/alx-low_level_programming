#include "main.h"
/**
 * times_table - prints mutiples of numbers
 */

void times_table(void)

{
	int i, j;
	int n = 9;

	for (i = 0; n <= 9; i++)
	{
		for (j = 0; n <= 9; j++)
		{
			_putchar((i * j));
		}
	}
}
