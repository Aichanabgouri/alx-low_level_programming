#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
	int i;
	int j;

	for (j = 1; j <= 10; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	}
}
