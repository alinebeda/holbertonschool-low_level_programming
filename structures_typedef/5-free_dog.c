#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - lib�re la m�moire alloue pr un dog
 * @d: pointeur vers le dog a lib�rer
 *
 * Descriptio:
 * fonction lib�re la memo alloue dynam pr un chien,
 * et aussi les cha�nes de caract�res name et owner
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
