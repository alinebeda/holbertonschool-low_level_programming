#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - alloue m�moire a l'aide de malloc
 * @b: size used to init
 * Return: pointeur
 */
void *malloc_checked(unsigned int b)
{
	void *ptr; /* declarat°de la variable ptr */
	/* allocat°de m�moire */
	ptr = malloc(b);
	/* verificat°si l'alloct° areussi */
	if (ptr == NULL)
		/* Quitter le program avec le code 98 si echec */
		exit(98);
	/* retourner le pointeur vers la mémoire allou�e */
	return (ptr);
}
