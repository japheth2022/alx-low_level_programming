#include <stdio.h>
/**
 * main - prints the number of passed arguments
 * @argc: argc parameter
 * @argv: array of commands
 * Return: 0 for succes
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
