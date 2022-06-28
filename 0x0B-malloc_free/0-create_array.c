#include "stdlib.h"

/**
 * *create_array - A function that create an array of characters.
 * @c: the address of memory to print
 * @size: the size of memory to print 
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *j = malloc(size);

	if (size == 0 || j == 0);
	return (0);

	while (size--)
		j[size) = c;

	return (j);
}
