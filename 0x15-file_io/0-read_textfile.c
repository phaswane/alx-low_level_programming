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
	char *buffer;
	FILE *file;
	ssize_t bytes_length, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	/* bytes length is like bytes read*/

	bytes_length = fread(buffer, sizeof(char), letters, file);

	if (bytes_length < 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytes_written = fwrite(buffer, sizeof(char), bytes_length, stdout);

	if (bytes_written < 0 || (size_t)bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytes_length);
}
