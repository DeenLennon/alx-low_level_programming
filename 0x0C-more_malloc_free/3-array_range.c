#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - a function that create array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int *array, index;

	if  (min > max)
		return (NULL);

	array = malloc(sizeof(int) * max);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < max; index++)
		array[index] = min++;

	return (array);
}
