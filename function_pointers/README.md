# Script descriptions
[0-print_name.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/0-print_name.c) - A function that prints a name


[1-array_iterator.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/1-array_iterator.c) - A function that executes a function given as a parameter on each element of an array, where `size` is the size of the array and `action` is a pointer to the function you need to use


[2-int_index.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/2-int_index.c) - A function that searches for an integer, where `size` is the number of elements in the array `array`, `cmp` is a pointer to the function to be used to compare values. It returns the index of the first element for which the `cmp` fnction does not return `0`. If no element matches, or if `size` is less than or equal to `0`, it will return `-1`


[3-calc.h](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/3-calc.h) - A header file containing the `struct op` and the following prototypes:
```
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
```


[3-op_functions.](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/3-op_functions.c) - A C program that contains the following functions: 
- `op_add`: returns the sum of `a` and `b`
- `op_sub`: returns the difference of `a` and `b`
- `op_mul`: returns the product of `a` and `b`
- `op_div`: returns the result of the division of `a` by `b`
- `op_mod`: returns the remainder of the divison of `a` by `b`


[3-get_op_func.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/3-get_op_func.c) - A function that selects the correct function to perform the operation asked by the user, where `s` is the operator passed as argument to the program. It returns a pointer to the function that corresponds to the operator given as a parameter. If `s` does not match any of the expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`


[3-main.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/function_pointers/3-main.c) - A C program that uses `atoi` to convert arguments to `int` and prints the result. If the number of arguments is wrong, it will print `Error`, followed by a new line and exit with the status `98`
