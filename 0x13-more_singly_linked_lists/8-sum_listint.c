#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - return sum of list data
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *curr;
	int r, sum = 0;

	if (!head)
		return (0);
	curr = head;
	while (curr)
	{
		r = curr->n;
		sum += r;
		curr = curr->next;
	}
	return (sum);
}
