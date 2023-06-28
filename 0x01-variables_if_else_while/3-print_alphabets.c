#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	char C;

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar('\n');
	return (0);
}
