#include <stdio.h>

/**
 * main - prints multiples of 3 or 5
 *
 * Return: Always(0)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%x ", x);
		}
	}
	putchar("Buzz\n");

	return (0);
}
