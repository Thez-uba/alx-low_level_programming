#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - print the last digit of the number stored in the variable n
* Return: void
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d and is 0\n", n);
	else if (n < 6 > 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	else
	return (0);
}
