#include "main.h"
/**
 * flip_bits - returns the differeces about digits between 2 numbers.
 * @n: the input number1
 * @m: input number 2
 * Return: the diferences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
