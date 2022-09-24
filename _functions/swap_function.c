#include <stdio.h>

/* function declaration */
void swap(int *x, int *y);

/**
 * main - C main function
 *
 * return: o
 */
int main(void)
{
	int a = 10; b = 20;

	printf("Before swap : %d, %d\n", a, b);

	/* calling the function to swap values */
	swap(&a, &b);

	printf("After swap : %d, %d\n", a, b);
	return (0);
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

	return;
}
