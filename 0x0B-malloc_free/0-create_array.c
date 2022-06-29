#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - A function that create an array of characters.
 * @c: the address of memory to print
 * @size: the size of memory to print
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *pstr;
	unsigned int i;


	pstr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pstr = c;
	pstr[i] = 0;
	return (size < 1 ? 0 : pstr);
}
