#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a vairable of type struct dog
 * @d: pointer to struct dog
 * @name: given dog name
 * @age: given dog age
 * @owner: given dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
