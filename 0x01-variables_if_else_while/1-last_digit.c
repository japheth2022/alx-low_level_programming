#include <stdlib.h>

#include <time.h>

#include <stdio.h>




/**
 * main - assigns a random number to the variable n when executed
 * and prints out the last number stored in n
 * Return:always 0
 */

int main(void)

{

	int n, v;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	v = n % 10;
	printf("last digit of %d is %d ", n, v);

	if (v > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (v != 0 && v < 6)
	{
	printf("and is less than 6 and  not 0\n");
	}
	else
	{
	printf("and is 0\n");
	}
	return (0);
}
