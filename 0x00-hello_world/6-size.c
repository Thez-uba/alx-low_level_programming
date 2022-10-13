#include <stdio.h>

/**
* main -  prints the size of various types on the computer
* Return: void
*/
int main(void)
{
	int a
	char b
	float c
	long int d
	long long int e;

	printf("size of an int: %d byte(s)\n", sizeof(a))
	printf("size of a char: %d byte(s)\n", sizeof(b))
	printf("size of a float: %d bytes(s)\n", sizeof(c))
	printf("size of a long int: %d byte(s)\n", sizeof(d))
	ptintf("size of a long long int: %d byte(s)\n", sizeof(e));
	return (0);
}
