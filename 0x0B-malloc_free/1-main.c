#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for alx student Lennon
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("alxLennon");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	return (0);
}
