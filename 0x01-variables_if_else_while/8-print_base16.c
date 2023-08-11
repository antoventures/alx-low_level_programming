#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 *
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
return (0);
}
