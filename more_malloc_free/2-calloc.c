#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - alloue mémoire pr un array, en utilisabt malloc
 * @nmemb: nbr d'�léments.
 * @size: taille de l'�lément;
 * Return: renvoie un ptr vers un arrays d'�lément
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	/* Vérifier si nmemb ou size est ége a 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allouer de la mémoire pour le tabeau */
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	/* init chq �l�met du tableau a 0 */
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
