#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * dog_t - struct dog type definition
 */
typedef struct dog dog_t;

/**
 * struct dog - a structure defined to store dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_DOG_H */
