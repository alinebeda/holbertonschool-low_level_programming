#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entier.
 * @min: L'entier de départ de la séquen..
 * @max: L'entier de fin de la séquenc.
 * Return:Renvoie un pointeur vers un tableau d'éléments.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j = 0; /* Initialiser j a zé */

	/* Vérifier si mi > a ma*/
	if (min > max)
		return (NULL);

	/* Allouer de la mémoire pour le table */
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	/* Remplir le tableau avec les valeurs de min a max */
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
