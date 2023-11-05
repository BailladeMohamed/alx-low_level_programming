#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Puppy poppy’s bio
 * @name: the name of the puppy
 * @age: puppy’s age
 * @owner: the puppy’s owner
 *
 * Description: the basic information about Poppy the doggy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct poppy’s the dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

