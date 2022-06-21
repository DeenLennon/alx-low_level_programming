#include "main.h"

/**
 * _strchr - A function that locates a character
 * @s: given string
 * @c: the given character
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
