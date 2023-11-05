#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - takes a string and returns its length
 * @s: evaluated string
 *
 * Return: the string’s length
 */
int _strlen(char *s)
{
	int pup;

	pup = 0;

	while (s[pup] != '\0')
	{
		pup++;
	}

	return (pup);
}

/**
 * *_strcpy - the string copied and pointed by source
 * including (\0) to the buffer pointed by dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int pup_len, pup;

	pup_len = 0;

	while (src[pup_len] != '\0')
	{
		pup_len++;
	}

	for (pup = 0; pup < pup_len; pup++)
	{
		dest[pup] = src[pup];
	}
	dest[pup] = '\0';

	return (dest);
}

/**
 * new_dog - this create a new pup
 * @name: new pup’s name
 * @age: pup’s age
 * @owner: pup’s owner
 *
 * Return: Pointer to the new pup (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int pup_len, owner_len;

	pup_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (pup_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

