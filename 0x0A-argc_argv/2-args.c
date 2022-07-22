#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count - number of command line arguments
 * @argv: argument vector - an array containing the program's command
 * line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
