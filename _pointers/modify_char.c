#include <stdio.h>

/**/

void modify_char(char *p, char pp)
{
	printf("Value of 'p' inside function: %p\n", p);
	printf("Value of 'pp' inside fumction: %c\n", pp);
	*p = 'O';
	pp = 'C';
	printf("New Value of '*p': %c\n", *p);
	printf("New Value of 'pp': %c\n", pp);
}

/**/

int main(void)
{
	char c = 'H', *m;
	m = &c;

	printf("Value of 'c' inside main: %c\n", c);
	printf("Value of 'm' inside main: %p\n", m);
	printf("Before function call!");
	modify_char(m, c);
	printf("Value of 'c' after call: %c\n", c);
	printf("Value of '*m': %c\n", *m);
	return (0);
}
