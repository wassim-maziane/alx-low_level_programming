#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog attributes
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
