#include <stdio.h>
/**
 * main - prints the number of passed arguments
 * @argc: argc parameter
 * @argv: array of commands
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
