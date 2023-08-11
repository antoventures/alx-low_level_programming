#include <stdio.h>
/**
 *
 * main - entry
 *
 * Return: 0 for success
 */

int main(void)
{
	char abz,ABZ;
	abz = 'a';

	for(abz='a';abz<='z';abz++)
		putchar(abz);
	for(ABZ='A';ABZ<='Z';ABZ++)
		putchar(ABZ);
	putchar('\n');

	return (0);
	
}
