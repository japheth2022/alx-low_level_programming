#include <stdio.h>
/**
 * main - prints al the passed arguments
 * @argc: argc parameter
 * @argv: array of listed commands
 * Return: 0 for a success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("argv index %d is = %s\n", count, argv[count]);
		printf("\n");
		return (0);
	}
}
