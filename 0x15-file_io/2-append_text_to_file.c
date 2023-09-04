#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	int file_descriptor;

	file_descriptor = popen(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	ssize_t bytes_written = write(file_descriptor, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
