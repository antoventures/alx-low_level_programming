#include <stdio.h>
/**
 * main - entry
 * Return: 0 for success
 */

int main(void)
{

	char c, e, q;
	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
		if(c != e && c != q)
			putchar(c);
	putchar('\n');

return (0);
}
