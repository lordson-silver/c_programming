#include <stdio.h>

/**
 * main - Function main
 * @value: floating point array
 * @p: floating point pointer
 * @i: integer variable
 *
 * function that explains the use of array pointers
 * return: always 0*/

int main (void)
{
	double value[5];
	double *p;
	int i;

	p = value;

	printf("Initializing Array values 5 - 25\n");

	for (i = 0; i < 5; i++)
	{
		value[i] = 5 * i + 5;
	}

	printf("Array values using pointer\n");

	for (i = 0; i < 5; i++)
	{
		printf("*(p + %d) : %f\n", i, *(p+i));
	}

	printf("Array values using balance as address\n");
	for (i = 0; i < 5; i++)
	{
		printf("*(value + %d) : %f\n", i, *(value+i));
	}
	return (0);
}
