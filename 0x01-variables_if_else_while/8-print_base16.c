#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 on successful program
 *
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
