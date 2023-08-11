#include <stdio.h>
/**
 * main - program entry
 * Return: 0 for success
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
putchar('\n');

return (0);
}
