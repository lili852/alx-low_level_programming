#include <stdio.h>
#include "lists.h"
/**
 * listint_len - get len of list
 * @h: pointer to the first node
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
