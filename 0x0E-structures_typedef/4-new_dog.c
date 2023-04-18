#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age:age of new dog
 * @owner: owner of new dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = strcpy(ptr->owner, owner);

	return (ptr);
}
