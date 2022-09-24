#include <stdio.h>

/*
 * modify_param = set the integer to 360
 * @p: a pointer to the integer we want to set to 360
 *
 * Return: nothing
 */

void modify_param(int *p)
{
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	*p = 360;
}

/*
 * Main - how to change the value of a variabe from outside the function
 * it is declared in, using a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 98, *m;
	m = &n;

	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	modify_param(m);
	printf("Value of 'n' after the call: %d\n", n);
	return (0);
}
