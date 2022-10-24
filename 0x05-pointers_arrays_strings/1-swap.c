#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first pointer parameter
 * @b: second pointer parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
