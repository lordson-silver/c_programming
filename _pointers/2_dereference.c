#include <stdio.h>

/*
 * Main - dereferencing pointers, example with int and char types
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, *p;
	n = 98;
	char c, *pp;
	c = 'H';
	pp  = &c;
	p = &n;

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	*p = 360;
	*pp = 'G';
	printf("Value of 'n': %d\n", n);
	printf("Value of '*pp': %d\n", *pp);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
	return (0);
}
