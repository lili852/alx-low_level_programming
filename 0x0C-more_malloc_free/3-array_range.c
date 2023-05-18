#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *a;
	int itr, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * full);
	if (a == NULL)
	{
		return (NULL);
	}
	for (itr = 0; min <= max; itr++)
	{
		a[itr] = min++;
	}
	return (a);
}
