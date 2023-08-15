#include "main.h"

/**
 * print_sign - printing sign of a number
 * @n: the number to be checked
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{

if (n > 0)
	_putchar(43);
return (1);
	
if (n < 0)
        _putchar(45);
return (-1);

if (n == 0)
	_putchar (48);
return (0);

}
