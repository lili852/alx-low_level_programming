#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add not at start
 * @head: pointer to pointer to the 1st node.
 * @n: new node data
 * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
