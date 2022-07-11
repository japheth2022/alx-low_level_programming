#include <stdio.h>
/**
 * main - prints all possible single digit number combinations
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
