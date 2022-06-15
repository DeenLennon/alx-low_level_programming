#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that print integers
 */
int main(void)
{
	unsigned long int a, i;

	a = 612852475143;
	for (i = 3; i < (a / 2); i = i + 2)
	{
		while ((a % i == 0) && (a != i))
			a = a / i;
	}
	printf("%lu\n", a);
	return (0);
}
