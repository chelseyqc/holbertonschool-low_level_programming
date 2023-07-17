#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - description of the dog
* @name: name of the dog
* @age: ages of the dog
* @owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
