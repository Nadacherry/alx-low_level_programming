#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 on successful execution
 *
 */

int main(void)
{
	char c;

	for (c = 'z'; c = 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
