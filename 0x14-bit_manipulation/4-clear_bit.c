#include "main.h"
/**
 * clear_bit - change to 0 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}