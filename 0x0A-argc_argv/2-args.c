#include <stdio.h>

/**
 * main - A program that prints all files passed to it
 * @argc: argc params
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[]);
	}
	return (0);
}
