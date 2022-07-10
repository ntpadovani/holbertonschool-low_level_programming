#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/*Defined type structs*/

/**
* type - A struct function.
* 
* @data: The variable containing the 
*        left side letter in our
*        2d array structure.
* @f:    It points to the function on the right
*        side of  our 2d array structure.
*/
typedef struct type
{
        char data;
        void (*f)(va_list ptr);
} escoge_t;
/*Defined type structs end*/

/*From here on below the functions*/

/**
* print_char - A function that prints a char.
* @ptr:  Contains the values.
* Return:  Void
*/

void print_char(va_list ptr)
{
        char storage;

        storage = va_arg(ptr, int);
        printf("%c", storage);
}

/**
* print_int - A function that prints an integer.
* @ptr:  Contains the values.
* Return:  Void
*/
void print_int(va_list ptr)
{
        int storage;

        storage = va_arg(ptr, int);
        printf("%d", storage);
}

/**
* print_float - A function that prints a decimal.
* @ptr:  Contains the values.
* Return:  Void
*/
void print_float(va_list ptr)
{
        double storage;

        storage = va_arg(ptr, double);
        printf("%f", storage);
}

/**
* print_string - A function that prints a string array.
* @ptr:  Contains the values.
* Return:  Void
*/
void print_string(va_list ptr)
{
        char *storage;

        storage = va_arg(ptr, char *);
        if (storage == NULL)
        {
                printf("(nil)");
                return;
        }
        printf("%s", storage);
}
/*Functions end*/

/*From here below, the funtion prototypes*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
