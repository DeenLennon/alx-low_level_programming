#include <stdio.h>

/**
 * main - prints all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (num <= 57)

	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
		putchar('\n');

		return (0);
}
