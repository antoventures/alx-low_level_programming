#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: number to be computed
 * Return: the last digit
 */

int print_last_digit(int i)
{
	int x;
	
	x = i % 10;

	if (x < 0)
	{
	x = x * -1;
	}

return (x);

}
