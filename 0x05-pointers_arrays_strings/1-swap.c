#include "main.h"

/**
 * swap_int - a function that swaps the vaules of two intergers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
