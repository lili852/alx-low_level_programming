#include "main.h"
/**
 * get_bit - get the bit of a given index.
 * @n: the input number
 * @index: the input index
 *Return: The converted value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
