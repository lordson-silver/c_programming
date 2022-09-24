# Headers in C

A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files.

There are two types of header files: the files that the programmer writes and the files that comes with your compiler.

### Include Syntax

Both the user and the system header files are included using the preprocessing directive #include. It has the following two forms −

`#include <file>`

This form is used for system header files. It searches for a file named 'file' in a standard list of system directories. You can prepend directories to this list with the -I option while compiling your source code.

`#include "file"`

This form is used for header files of your own program. It searches for a file named 'file' in the directory containing the current file. You can prepend directories to this list with the -I option while compiling your source code.


