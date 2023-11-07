#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int i, name_len, owner_len;

    /* Calculate the lengths of the name and owner strings */
    for (name_len = 0; name[name_len]; name_len++)
        ;
    for (owner_len = 0; owner[owner_len]; owner_len++)
        ;

    /* Allocate memory for the dog structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for the name and owner strings */
    new_dog->name = malloc(name_len + 1);
    new_dog->owner = malloc(owner_len + 1);

    /* Check for allocation failure */
    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return (NULL);
    }

    /* Copy the name and owner strings */
    for (i = 0; i < name_len; i++)
        new_dog->name[i] = name[i];
    new_dog->name[i] = '\0';

    for (i = 0; i < owner_len; i++)
        new_dog->owner[i] = owner[i];
    new_dog->owner[i] = '\0';

    new_dog->age = age;

    return (new_dog);
}
