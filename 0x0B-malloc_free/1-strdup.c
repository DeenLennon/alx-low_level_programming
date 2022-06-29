#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a newly alloc space in memory
 * @str: Literal string
 * Return: a pointer or return NULL if insufficient memory or str i NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (*str == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)

		s = malloc(i * sizeof(char));

	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}
