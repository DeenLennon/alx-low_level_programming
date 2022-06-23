#include "main.h"

/**
 * _sqrt_recursion - A function that print square root.
 * @n: integer
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate(i, n));
	}
}
