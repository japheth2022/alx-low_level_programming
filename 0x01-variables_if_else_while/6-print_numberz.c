#include <stdio.h>
/**
 * main - prints digits less than 10
 * Return: always 0
 */


int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
