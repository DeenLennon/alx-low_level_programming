#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - Creates an  array of integers ordered from min
 * 		to max, inclusive
 * @min: the first value of the array
 * @max: the last value of the array
 * Return: if min > max or the function fails - NULL.
 * 		Otherwise - a pointer to the newly created array.
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
