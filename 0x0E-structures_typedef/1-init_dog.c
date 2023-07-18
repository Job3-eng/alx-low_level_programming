#include <stdio.h>
#include "dog.h"

/**
 * init_dogg - initializing struct dog
 * @a: details of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dogg(struct dog *a, char *name, float age, char *owner)
{
	if (a)
	{
		a->name = name;
		a->age = age;
		a->owner = owner;
	}
}
