#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of this program
 * @argc: Number of arguments passed to the function
 * @argv: Argument vector of pointers to strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
