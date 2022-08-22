#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard
 * output
 * @filename: name of file to be read
 * @letters: the number of letters it should read and print
 * Return: 0 if the file is NULL, can not be opened or read, or write fails or
 * does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t reads, writes;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	reads = read(file, buffer, letters);
	writes = write(STDOUT_FILENO, buffer, reads);

	close(file);

	free(buffer);

	return (writes);
}
