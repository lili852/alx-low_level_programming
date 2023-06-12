#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append text to the end of file
 * @filename: name of file to be readed
 * @text_content: the text that will be appended.
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ID = 0, wr = 0, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{}
	}
	ID = open(filename, O_APPEND | O_WRONLY, 0600);
	if (ID == -1)
	{
		return (-1);
	}
	wr = write(ID, text_content, count);
	if (wr == -1)
	{
		return (-1);
	}
	close(ID);
	return (1);
}
