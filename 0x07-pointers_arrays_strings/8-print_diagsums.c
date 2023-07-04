#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule la somme des diagonales d'une matrice carrée
 * @a: Matrice carrée représentée sous forme de tableau à une dimension
 * @size: Taille de la matrice carrée
 * Description: Cette fonction calcule la somme
 * des éléments de la diagonale
 * principale et de la diagonale secondaire
 * d'une matrice carrée. Les résultats
 * sont affichés sur la sortie standard.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum1 += *(a + y * size + y);
	}

	for (y = 0; y < size; y++)
	{
		sum2 += *(a + y * size + (size - y - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
