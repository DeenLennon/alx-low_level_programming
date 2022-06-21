#include "main.h"

/**
 * _memcpy - A function that capies memory
 * @dest: destinary memory
 * @src: source memory
 * @n: the data to by copied
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	dest[x] = src[x];
	return (dest);
}
