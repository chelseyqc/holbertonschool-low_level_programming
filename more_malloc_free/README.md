# Script descriptions
[0-malloc_checked.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/tree/master/more_malloc_free/0-malloc_checked.c) - A function that allocates memory using `malloc`. Returns a pointer to the allocated memory. If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`


[1-string_nconcat.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/tree/master/more_malloc_free/1-string_nconcat.c) - A function that concatenates two strings, the returned pointer shall point to a newly allocated space in memory that contains `s1`, followed by the first `n` bytes of `s2`, and null terminated. If the function fails, it should return `NULL`. If `n` is greater or equal to the length of `s2`, then use the entire string `s2`. If `NULL` is passed, treat it as an empty string


[2-calloc.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/tree/master/more_malloc_free/2-calloc.c) - A function that allocates memory for an array, using `malloc`. The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`. If `malloc` fails, then `_calloc` returns `NULL`


[3-array_range.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/tree/master/more_malloc_free/3-array_range.c) - A function that creates an array of integers. The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`. Returns the pointer to the newly created array. If `min` > `max`, return `NULL`, if `malloc` fails, return `NULL`

