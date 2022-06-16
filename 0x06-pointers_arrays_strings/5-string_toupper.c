#include "main.h"

/**
 * string_array - A function that converts any string to uppercase
 * @a: the array
 * @x: the value of the array
 */
char string_array(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
