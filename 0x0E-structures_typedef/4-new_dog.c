#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/* declare variables */
dog_t *newdog;
int namelen, ownerlen, i;

/* allocate memory for new dog */
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);

/* find length of name and owner strings */
for (namelen = 0; name[namelen] != '\0'; namelen++)
;
for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
;

/* allocate memory for name and owner strings in new dog */
newdog->name = malloc((namelen + 1) * sizeof(char));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
newdog->owner = malloc((ownerlen + 1) * sizeof(char));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}

/* copy name and owner strings into new dog */
for (i = 0; i <= namelen; i++)
newdog->name[i] = name[i];
newdog->age = age;
for (i = 0; i <= ownerlen; i++)
newdog->owner[i] = owner[i];

/* return pointer to new dog */
return (newdog);
}
