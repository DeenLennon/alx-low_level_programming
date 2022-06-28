#include "main.h"
#include <stdio.h>

/**
 * *create_array - A function that create an array of characters.
 * @c: the address of memory to print
 * @size: the size of memory to print
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
