#include "main.h"
/**
 * _islower -  check lower case
 * @c: the character to check
 * Return: 1 for lower or 0 for anything else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
