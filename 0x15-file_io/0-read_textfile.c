#include "main.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: name of my file
 * @letters: number of the letters that i used
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char *) * (letters));
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_read == -1 || bytes_written == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}
