#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
