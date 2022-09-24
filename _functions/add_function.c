#include <stdio.h>

/* function declaration */
int max(int num1, int num2);


/**
 * */
int main(void)
{
	int a = 10, b = 20, ret;

	ret = max(a, b);

	printf("Max value is : %d\n", ret);

	return (0);
}

/* function returning the max between two numbers */
int max(int num1, int num2)
{
	int res;
	if (num1 > num2)
		res = num1;
	else
		res = num2;

	return res;
}
