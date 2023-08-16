#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @c: integer computing the absolute value
 * Return: Value of a number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int res;

res = c * -1;

return (res);
}
return (c);
}
