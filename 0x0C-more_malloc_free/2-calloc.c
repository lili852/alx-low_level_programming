#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int itr, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(d);
	if (p == NULL)
		return (NULL);

	for (itr = 0; itr < (d); itr++)
	{
		p[itr] = 0;
	}
	return (p);
}
