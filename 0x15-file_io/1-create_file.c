#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be readed
 * @text_content: the text inside the file.
 * Return: always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int DI = 0, wr = 0, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{}
	}
	DI = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (DI == -1)
	{
		return (-1);
	}
	wr = write(DI, text_content, count);
	if (wr == -1)
	{
		return (-1);
	}
	close(DI);
	return (1);
}
