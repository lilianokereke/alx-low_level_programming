#ifndef DOG_H
#define DOG_H

#define DOG
#define DOG DOG_T
/**
 * struct dog - data type
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
