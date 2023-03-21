#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with char, float, char
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * the programme stores details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
