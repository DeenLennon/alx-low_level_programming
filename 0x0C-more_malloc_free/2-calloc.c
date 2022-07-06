#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - calloc library internally implemented
 * @nmemb: first parameter
 * @size: second parameter
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (mem);
}
