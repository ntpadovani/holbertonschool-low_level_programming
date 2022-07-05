#include"dog.h"
#include <stdlib.h>

/**
* new_dog - A funtion to create a new struct dog.
*
* @name: The string of type char that will store the
*        dog's name.
* @age: The float type variable that will store the
*       dog's age.
* @owner: The string of type char that will store the
*         dog's owner's name.
* Return: The new struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog_ptr = NULL;

	newdog_ptr = malloc(sizeof(dog_t));

	if (newdog_ptr != NULL)
	{
		newdog_ptr->name = malloc((_strlen(name) + 1) * sizeof(char));
	}
	else
	{
		return (NULL);
	}
	if (newdog_ptr->name != NULL)
	{
		newdog_ptr->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	}
	else
	{
		free(newdog_ptr);
		return (NULL);
	}
	if (newdog_ptr->owner != NULL)
	{
		newdog_ptr->name = _strcpy(newdog_ptr->name, name);
		newdog_ptr->age = age;
		newdog_ptr->owner = _strcpy(newdog_ptr->owner, owner);

	}
	else
	{
		free(newdog_ptr->name);
		free(newdog_ptr);
		return (NULL);
	}
	return (newdog_ptr);
}
