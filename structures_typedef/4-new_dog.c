#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Propriétaire du chien
 *
 * Description :
 * Cette fonction crée un nouveau chien en copiant les valeurs de `name`
 * et `owner` dans des emplacements mémoire alloués dynamiquement.
 * Elle renvoie un pointeur vs une struct `dog_t` représent le vx chien cré
 * Si la créa° échouer une raison quelconque, la font° renvoieL.
 * Return: Un pointeur vers une nvlle struct dog_t, ou NULL en cas d'éche.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog1;

	/* Vérifier si les paramètres sont val */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allouer de la mémoire pour la structure do */
	new_dog1 = malloc(sizeof(dog_t));
	if (new_dog1 == NULL)
		return (NULL);

	/* Allouer de la mémoire pour stocker une copie du nom*/
	new_dog1->name = (name);
	if (new_dog1->name == NULL)
	{
		free(new_dog1);
		return (NULL);
	}


	/* Allouer de la mémoire pour stocker une copie du propriét*/
	new_dog1->owner = (owner);
	if (new_dog1->owner == NULL)
	{
		free(new_dog1->name);
		free(new_dog1);
		return (NULL); /* si echec retourne NULL */
	}

	new_dog1->age = age;
	return (new_dog1);
}














































