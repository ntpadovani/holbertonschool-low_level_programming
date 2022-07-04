#include"dog.h"

/**
* init_dog - A function that initializes a variable of type struct.
* @d: A string pointer.
* @name: Used to store the name of the dog.
* @age: Used to store the age of the dog.
* @owner: Used to store the name of the owner of the dog.
* Return: void.
*/




void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
