#include <stdio.h>

/**
 * main - a function to print new file
 * @argc: argc the parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
