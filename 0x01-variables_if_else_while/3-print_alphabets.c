#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	char abz;
	abz = 'a';

	for (abz = 'a'; abz <= 'z'; abz++)
		putchar(abz);

	for (abz = 'A'; abz <= 'Z'; abz++)
		putchar(abz);
	putchar('\n');

	return (0);
}
