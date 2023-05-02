#include "main.h"

/**
 * swap_int-Swaps the values of two integers.
 * @a:First integer.
 * @b:second integer.
 *
 * Return:Always 0.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
