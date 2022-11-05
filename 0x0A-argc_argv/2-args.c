#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of argument supplied
 * @argv: An arrey of pointer to the argument
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
