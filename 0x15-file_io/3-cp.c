#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int source_fd, dest_fd, bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	(source_fd = open(argv[1], O_RDONLY)) == -1 ||
	(dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	return (argc != 3 ? 97 : 98);
}
	(dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	return (argc != 3 ? 97 : 98);
	}

	while ((bytes = read(source_fd, buffer, BUFFER_SIZE)) > 0 &&
	write(dest_fd, buffer, bytes) == bytes);

	if (bytes == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	if (bytes != -1 && bytes != 0)
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);

	close(source_fd);
	close(dest_fd);

	return (bytes == -1 ? 98 : (bytes != 0 ? 99 : 0));
}
