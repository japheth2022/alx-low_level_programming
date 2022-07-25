#include <stdio.h>

/**
 * main -  a function that prints ts name
 * @argc: argc parameter
 * @argv: array of programms
 * Return: 0 for a success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
