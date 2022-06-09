#include "main.h"

/**
 * print_alphabet - lowercase alphabets
 */
void print_alphabet(void)
{
	int char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
