# Script descriptions
[dog.h](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/structures_typedef/dog.h) - A header file that contains the `struct dog` and the following prototypes:
```
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

```


[1-init_dog.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/structures_typedef/1-init_dog.c) - A function that initializes a variable of type `struct dog`


[2-print_dog.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/structures_typedef/2-print_dog.c) - A function that prints a `struct dog`. If an element of `d` is `NULL`, it will print `(nil)` instead


[4-new_dog.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/structures_typedef/4-new_dog.c) - A function that creates a new dog, and stores a copy of `name` and `owner`. It will return `NULL` if the function fails


[5-free_dog.c](https://github.com/chelseyqc/holbertonschool-low_level_programming/blob/master/structures_typedef/5-free_dog.c) - A function that frees dogs

