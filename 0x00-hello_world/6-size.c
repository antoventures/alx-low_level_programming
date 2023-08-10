#include <stdio.h>

/**
 * main- starts
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %lu ", sizeof(c));
	printf("Size of an int: %lu ", sizeof(i));
	printf("Size of a long int: %lu ", sizeof(a));
	printf("Size of a long long int: %lu ", sizeof(b));
	printf("Size of a float: %lu ", sizeof(f));

	return (0);
}
