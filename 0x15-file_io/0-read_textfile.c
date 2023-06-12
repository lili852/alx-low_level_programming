#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: name of file to be readed
 * @letters: the number of letters it should read and print
 * Return: always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ktr = 0;
	ssize_t WR = 0;
	ssize_t len = 0;
	char *buff = NULL;

	if (filename != NULL)
	{
		buff = malloc(letters);
		if (buff == NULL)
		{
			return (0);
		}
		ktr = open(filename, O_RDONLY, 0600);
		if (ktr == -1)
		{
			free(buff);
			return (0);
		}
		len = read(ktr, buff, letters);
		if (len == -1)
		{
			free(buff);
			return (0);
		}
		WR = write(STDOUT_FILENO, buff, len);
		if (WR == -1 || WR < len)
		{
			free(buff);
			return (0);
		}
		close(ktr);
		free(buff);
		return (WR);
	}
	return (0);
}
