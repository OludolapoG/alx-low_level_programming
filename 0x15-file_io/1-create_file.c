#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure, if text_content is NULL create an
 * empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, letters, rdwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rdwr = write(file, text_content, letters);

	if (rdwr == -1)
		return (-1);

	close(file);

	return (1);
}
