#include<stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: struct dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int n, n_name, n_owner;

	d = malloc(sizeof(d));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}

	for (n_name = 0; name[n_name]; n_name++)
		;

	for (n_owner = 0; owner[n_owner]; n_owner++)
		;

	d->name = malloc(n_name + 1);
	d->owner = malloc(n_owner + 1);

	if (!(d->name) || !(d->owner))
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}

	for (n = 0; n < n_name; n++)
		d->name[n] = name[n];
	d->name[n] = '\0';

	d->age = age;

	for (n = 0; n < n_owner; n++)
		d->owner[n] = owner[n];
	d->owner[n] = '\0';

	return (d);
}
