# Strings

Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

declaration ``char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};``

also ``char greeting[] =  "Hello";`` also works.

Actually, you do not place the null character at the end of a string constant. The C compiler automatically places the '\0' at the end of the string when it initializes the array.

```c
	#include <stdio.h>

	int main () {

		char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
		printf("Greeting message: %s\n", greeting );
		return 0;
	}
```

When the above code is compiled and executed, it produces the following result − ``Greeting message: Hello``

---

C supports a wide range of functions that manipulate null-terminated strings −
1. `strcpy(s1, s2)` - Copies string `s2` into string `s1`
2. `strcat(s1, s2)` - Concatenates string `s2` onto the end of string `s1`
3. `strlen(s1)` - Returns the length of string `s1`
4. `strcmp(s1, s2)` - Returns 0 if `s1` and `s2` are the same; less than 0 if `s1<s2`; greater than 0 if `s1>s2`
5. `strchr(s1, ch)` - Returns a pointer to the first occurrence of character ch in string `s1`
6. `strstr(s1, s2)` - Returns a pointer to the first occurrence of string `s2` in string `s1`
