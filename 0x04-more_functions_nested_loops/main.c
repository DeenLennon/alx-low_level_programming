#include <stdio.h>

int strlen(char *);

/**
 * main - check the code for holberton school students
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d", len);
	return (0);
}
