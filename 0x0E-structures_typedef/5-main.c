#include "dog.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    free_dog(my_dog);

    return (0);
}

