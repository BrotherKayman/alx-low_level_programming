#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initialize variable type of struct dog
* @d: Struct
* @name: Name variable
* @age: Age Variable
* @owner: Owner Variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
