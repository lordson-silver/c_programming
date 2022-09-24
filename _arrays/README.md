# Arrays
---

## Arrays in C are contiguous memory areas that hods a number of values of the same type.

All elements of an array haave the same type.

To declare an array we use this syntax: ``type var_name[number_of_elements];``

where ``number_of_elements`` is the number of elements the ``type`` need.

``int t[5];``

We access the different elements of an array this way: ``t[0]`` will access the first element ...

It is legal to use array names as constant pointers, and vice versa. Therefore, \*(balance + 4) is a legitimate way of accessing the data at balance[4].


