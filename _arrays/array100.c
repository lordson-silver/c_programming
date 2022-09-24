#include <stdio.h>


/**
 * main - C main function
 * @n: an integer array
 * @i: int var
 * @j: int var
 *
 * loop that prints the value of an array
 * return: always 0
 */

int main ()
{
	int n[10]; /* Initialize elements of n[] to 0 */
	int i,j;

	for (i = 0; i < 10; i++)
	{
		n[i] = 100 + i;
	}

	for (j = 0; j < 10; j++)
	{
		printf("Value at n[%d]: %d\n",j, n[j]);
	}

	return (0);
}
