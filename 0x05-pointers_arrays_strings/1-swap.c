#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input paramter 1
 * @b: intput paramter 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}

