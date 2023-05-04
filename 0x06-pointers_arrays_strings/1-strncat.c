#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of characters to copy from the source string.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, const char *src, size_t n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
