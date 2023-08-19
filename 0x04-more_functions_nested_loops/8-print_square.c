#include "main.h"

/**
 * main - prints a square, followed by a new line.
 *
 * @size - the size of the square
 *
 */

void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)
		_putchar('\n');

	while (b < size)
	{
		a = 0;

		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}