#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog a initialiser
 * @name: Nom du chien
 * @age: age du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction initialise les membres de la structure
 * struct dog avec les valeurs fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* verifier si le pointeur a est NULL */
		return; /* si ou, retournez sans rien faire */

	d->name = name;
	/* init le membre name avec la valeur fournie */
	d->age = age;
	/* init le membre age avec la valeur fournie */
	d->owner = owner;
	/* init le membre owner avec la valeur fournie */
}

