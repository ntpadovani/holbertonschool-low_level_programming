#include"dog.h"
#include <stdlib.h>

/**
* _strcpy-Copy a string
*@dest: one of the strings to be copied
*@src: The source of the string to be copied
* Return: the pointer to destination string
*/

char *_strcpy(char *dest, char *src)
{
int idx;
int lenght;

	lenght = _strlen(src);
	for (idx = 0; idx <= lenght; idx++)
	{
		dest[idx] = src[idx];
	}
return (dest);
}


/**
 *_strlen -a function that returns the length of a string.
 *@s: The string
 * Return: The lenght of the string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
	
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
