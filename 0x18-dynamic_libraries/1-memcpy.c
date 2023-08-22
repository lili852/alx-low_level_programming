#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr = 0;

	while (itr < n)
	{
		dest[itr] = src[itr];
		itr++;
	}
	return (dest);
}
