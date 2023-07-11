#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text content to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_read = 0, _len = 0;
	char *_buffer;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (_len = 0, _buffer = text_content; *_buffer; _buffer++)
		{
			_len++;
		}

		bytes_read = write(file, text_content, _len);
	}

	if (close(file) == -1 || bytes_read != _len)
	{
		return (-1);
	}

	return (1);
}
