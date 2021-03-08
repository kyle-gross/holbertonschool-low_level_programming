#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = &dog;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
