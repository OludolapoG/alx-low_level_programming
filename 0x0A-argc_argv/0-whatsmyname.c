#include <stdio.h>
#include "main.h"

/**
 * main - prints this program's name then a new line
 * @argc: argument count - number of command line arguments
 * @argv: argument vector - an array that contains the program's command
 * line arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
