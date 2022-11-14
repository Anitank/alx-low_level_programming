#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: pointer to struc
 */

dog_t *new_dog(char *name, float age, char *owner)

{

	struct dog *ret_dog;

	ret_dog = malloc(sizeof(struct dog));

	if (ret_dog == NULL)
		return (NULL);

	ret_dog->name = name;
	ret_dog->age = age;
	ret_dog->owner = owner;

	return (ret_dog);
}
