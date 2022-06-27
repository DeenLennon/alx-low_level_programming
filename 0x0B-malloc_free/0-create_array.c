#include "main.h"

/**
 * *create_array - A function that create an array of characters.
 * @c: the address of memory to print
 * @size: the size of memory to print 
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			_putchar(" ");
		}
		if (!(i % 10) && i)
		{
			_putchar("\n");
		}
		_putchar("0x%02x", c[i]);
		i++;
	}
	_putchar("\n");
}

/**
 * main - check the code for an array
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	c = *create_array(98, 'H');
	if (c == NULL)
	{
		_putchar("fail to allocate memory\n");
		return (1);
	}
	simple_print_c(c, 98);
	return (0);
}
