#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to proxis stdout
 * @filename:  reading file
 * @letters:  amount of letters it should read and print
 *
 * Return: the actual amount of letters it could read and print
 *  return 0, if the file cannot be read
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t length = 0, final_length = 0;
	int fd = 0;
	char *buff = NULL;


	if (filename == NULL)
		return (length);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (length);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (length);
	length = read(fd, buff, letters);
	final_length = write(STDOUT_FILENO, buff, length);
	if (final_length != length)
		length = 0;
	close(fd);
	free(buff);
	return (length);
}
