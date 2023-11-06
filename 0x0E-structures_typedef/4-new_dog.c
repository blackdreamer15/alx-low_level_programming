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
	dog_t *max_dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = strlen(name) + 1;
		owner_len = strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_len);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * owner_len);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = strcpy(max_dog->name, name);
		max_dog->owner = strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}
