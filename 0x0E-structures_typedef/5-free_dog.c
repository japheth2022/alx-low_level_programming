#include "dog.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * free_dog - function
 * @d: pointer to dog
 * Description: function to free dogs
 * Return: no return.
 */

void free_dog(dog_t *d)

{

	if (d)
	{
	free(d->name);

	free(d->owner);

	free(d);
	}

}
