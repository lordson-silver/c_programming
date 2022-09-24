#include <stdio.h>
#include <string.h> /* Required to use string functions */

/**
 * */

int findLen(char str[12]);

int main (void)
{

	char str1[] = "Hello";
	char str2[] = " World";
	char str3[12];
	int len;

	/* copy str1 into str3 */
	strcpy(str3, str1); /* strcpy(dest, src) */
	printf("strcpy(str3, str1) : %s\n", str3);

	/* concatenates str1 and str2 */
	strcat(str1, str2); 
	/* strcat(firststr, secondstr, ...) adds every other string to the first respectively */
	printf("strcat(str1, str2) : %s\n", str1);

	/* total lenghth of str1 after concatenation */
	len = findLen(str1);
	printf("strlen(str1) :  %d\n", len );
	return (0);
}

int findLen(char str[12])
{
	int len;
	len = strlen(str);
	return len;
}
