#include "main.h"

/**
 * cap_string - A function that capitalizes string letter
 * @x: the variable to be capitalized
 * Return: capitalized x
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (x[i])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++
	}
	return (x);
}
