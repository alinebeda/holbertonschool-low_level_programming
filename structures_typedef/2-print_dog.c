#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print les détails d'un chine
 * @d: Pointeur vers la structure dog a imprimer
 *
 * Description:
 * ct fonct� print les détails d'undog, tels que le nom, l'âge et le propro.
 * Si un éemt de la structure dog est NULL, la fon°print "(nil)"place
 * Si le pointeur d est NULL, la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* verifier si le pointeur d est NULL. */
		return; /* si oui, return sans rien faire */

	if (d->name == NULL) /* verifiez si le nom du chien est NULL */
		printf("Name: (nil)\n"); /* si oui return (nil) */
	else
		printf("Name: %s\n", d->name); /* Sinon, imprime le nom du chien */

	printf("Age: %.6f\n", d->age); /* Imprime l'âge du chien*/

	if (d->owner == NULL) /* verifie si le propri du chien est NULL */
		printf("Owner: (nil)\n"); /* Si oui, imprime (nil) */
	else
		printf("Owner: %s\n", d->owner);/* Sinn,print le proprio du dog */
}
