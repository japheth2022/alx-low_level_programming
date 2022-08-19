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

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("last dgit of %d is", n);
	if (n % 10 < 5)
	{
		printf("less than 5");
	}
	if (n % 10 == 0)
	{
	printf("0");
	}
	if (n % 10 > 5)
	{
	printf("greater than 5");
	}
	printf("\n");

	return (0);
}
