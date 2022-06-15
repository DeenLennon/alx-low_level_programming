#include "main.h"
#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			_putchar("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			_putchar("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar("%x", x);
		}
		if (x < 100)
			_putchar(" ");
	}
	_putchar("\n");
	return (0);
}
