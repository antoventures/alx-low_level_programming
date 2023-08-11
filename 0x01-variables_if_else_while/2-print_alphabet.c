#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 * Return: 0 - success
 */

int main(void)
{
	char alpha;
	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		putchar('\n');
	}
	return (0);
}
