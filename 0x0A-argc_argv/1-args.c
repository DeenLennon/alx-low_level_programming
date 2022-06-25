#include <stdio.h>

/**
 * main - this is a program that prints the number of arguments
 * @argc: argc params
 * @argv: an array of a command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
