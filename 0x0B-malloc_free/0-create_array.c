#include "main.h"
/**
 * create_array - creates an array of char and
 * initialises it with a specific char.
 * @size: The size of the array to be initialised.
 * @c: The specific char to initialise the array
 * Return: If size == 0 or the function fails - NULL.
 * otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
