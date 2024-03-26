#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concat 2 strings
 * @s1: 1er string a concat
 * @s2: 2eme string a concat
 * @n: n premiersbytes of s2
 * Return: string a concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i = 0, j = 0, k;

	/* verifier si strings sont NULL es ls init a une string vide si oui */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* compter la long de s1 et S2 */
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	/* si n est pls ptt que la long s2, ne concat que ls n 1er caracteres S2 */
	if (n < j)
		j = n;

	/* Allouer de la m�moire pr la nvlle cha�ne */
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	/* cp les caract�res de s1 ds la nvlle cha�ne */
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	/* cp les caract�resbde s2 (j caract ou moins) ds la nvlle cha�ne */
	for (k = 0; k < j; k++)
		ptr[i + k] = s2[k];

	/* ajouter le caract�re de fin de cha�ne */
	ptr[i + k] = '\0';
	return (ptr);
}
