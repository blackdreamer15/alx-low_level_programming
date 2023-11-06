#include "dog.h"

/**
 * new_dog - Write a function that creates a new dog
 *
 * @name: Structure name variable
 * @age: Structure age variable
 * @owner: Structure owner variable
 *
 * Return: Exit with new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogCopy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dogCopy = malloc(sizeof(dog_t));

	if (dogCopy == NULL)
		return (NULL);

	dogCopy->name = malloc(sizeof(dogCopy->name) * (strlen(name) + 1));

	if (dogCopy->name == NULL)
	{
		free(dogCopy);
		return (NULL);
	}

	dogCopy->owner = malloc(sizeof(dogCopy->owner) * (strlen(owner) + 1));

	if (dogCopy->owner == NULL)
	{
		free(dogCopy->name);
		free(dogCopy);
		return (NULL);
	}

	dogCopy->name = strcpy(dogCopy->name, name);
	dogCopy->age = age;
	dogCopy->owner = strcpy(dogCopy->owner, owner);

	return (dogCopy);
}