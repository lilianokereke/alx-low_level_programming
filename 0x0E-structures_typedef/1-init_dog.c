#include "dog.h"

/**
 * init_dog - initialize a stucture
 * @d: a pointer
 * @name: another pointer
 * @age: a variable
 * @owner: another variable
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct init_dog
{

	struct dog *p;
	char *name;
	float age;
	char *owner;
};
