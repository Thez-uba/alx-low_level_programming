#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alllocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A poointer to the allocated memory
 */

void *malloc_checked(unsignd int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98)

	return (mem);
}
