#ifndef _DOG_
#define _DOG_

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - A struc called dog
*
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
* Description: A struct used to specify a dog's name,
*              age and owner's name.
*/
struct dog
{
char *name;
float age;
char *owner;
};

/*Below from this line are the prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
