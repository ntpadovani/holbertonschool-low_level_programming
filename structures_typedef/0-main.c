#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Rayito";
    my_dog.age = 13.5;
    my_dog.owner = "Wally";
    printf("My name is %s, and I am %.1f :) - Guau, guau!\n", my_dog.name, my_dog.age);
    return (0);
}
