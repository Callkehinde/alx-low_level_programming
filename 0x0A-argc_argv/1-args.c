#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name number of arguments passed to it
 * @argc: Number of arguments passed to the function
 * @argv: Argument vector of pointers to strings
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%dln", argc - 1);
	return (0);
}
