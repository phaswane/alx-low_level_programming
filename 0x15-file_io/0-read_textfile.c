#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
