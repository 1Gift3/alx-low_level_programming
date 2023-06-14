#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always nothing (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
