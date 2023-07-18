#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - structure containing elements of a dog like name age owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_z;

void init_dogg(struct dog *a, char *name, float age, char *owner);

void print_dogg(struct dog *a);

dog_z *new_dogg(char *name, float age, char *owner);

void free_dogg(dog_z *a);

#endif
