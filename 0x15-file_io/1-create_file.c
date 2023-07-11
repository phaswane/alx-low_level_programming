#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with the specified name and
 *		writes the given text content to it
 * @filename: name of the file to create
 * @text_content: text content to write to the file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, _len = 0, bytes_read = 0;
	char *_buffer;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (_len = 0, buffer = text_content; *buffer; buffer++)
		{
			_len++;
		}
		bytes_read = write(file, text_content, _len);
	}

	if (close(file) == -1 || _len != bytes_read)
		return (-1);

	return (1);
}
