Address of unary operrator &
When we declare a variable, the computer will reserve the right amount of space for the variable in the memory (depending on its type).
When we assign a value 'H' to c, then 'H' is stored at c's address.
But you know that a byte can only store numbers. So actually, the byte will not hold exactly the letter 'H', but its ascii code, which is 72 (man ascii). So it really looks like this in memory
Note that you do not control the address where the variable is stored. In order to know what is the address of a variable, you can use the “address-of unary operator” &
---
You can use %p to print addresses (the values of pointers) with printf
This example will not compile with our regular flags -Wall -Wextra -Werror -pedantic -std=gnu89. You’ll learn why later
A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data.
 Like any other variable it needs to be declared. General form is
 `var_type *var;`
 - The * tells that the variable var is a pointer…
 - … that points to a var_type.
 - The value of var will be a memory address holding a value of type var_type
 
 `int *ptr`
` *p = 402;: equivalent to n = 402, since p == &n. Now *p == 402 so n == 402.`
Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).
- at declaration, it is used to declare a variable of type pointer to something. Example:
 `int *n;`
-  when used inside the code it is used to dereference pointers. Example `*n = 98;`

## Pointers Arithmetic

Another way to access different elements of an array, is to use this other notation
 `*(var + x)`, where `var` is the name of an array, and `x` is the (x+1)th element (starting counting elements at 0 of course) of this array.
 
