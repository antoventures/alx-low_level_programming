#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: void
 */


void print_alphabet_x10(void)
{
int i;

i = 1;

while (i <= 10)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

_putchar('\n');
i++;
}
}
