# Functions in C

---

## A function is a group of statements that together perform a tasks.

Every C program has at least one functio, which is `main()`, and all the most trivial programs can define additiona functions.

A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

### Function Prototype

Its a Function Declaration prior to whe the function is called.
- Tells us, who can call it
- the type of value it returns
- its name
- the arguments it takes.

### Defining a Function

```C
	return_type function_name( parameter list ) {
		body of the function
	}
```

### Function Declarations

A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.

`return_type function_name( parameter list );`

### Calling a Function

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program.

`container-var-of-function-return-type = function_name( arguments );`

### Automatic Variable

A variable initialized and used within the scope function, which is ignored after the function returns.

> - **Note** that C has a keyword `"auto"` for declaring automatic variables
> `auto int i = 0`
> - Compiler is smart enough to know, so you need to specify as it is always `auto` by default
>
> - local vars can also be defined as `static`
> `static int i = 0`
> - init happens once no matter how many times the function is called, and the value persist between calls.


